//
// Created by angelo on 29/3/22.
//
#include "bserver.h"
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>

using namespace std;


int bserver::listener(int socket) {
    if (socket == -1)
    {
        cerr << "Can't create a socket! Quitting" << endl;
        return -1;
    }

}

void bserver::binder(int socket) {
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(54000);
    inet_pton(AF_INET, "0.0.0.0", &hint.sin_addr);
    bind(socket, (sockaddr*)&hint, sizeof(hint));
}
void bserver::waiter(int socket, sockaddr_in client, socklen_t Size) {
    char host[NI_MAXHOST];      // Client's remote name
    char service[NI_MAXSERV];   // Service (i.e. port) the client is connect on

    memset(host, 0, NI_MAXHOST); // same as memset(host, 0, NI_MAXHOST);
    memset(service, 0, NI_MAXSERV);

    if (getnameinfo((sockaddr*)&client, sizeof(client), host, NI_MAXHOST, service, NI_MAXSERV, 0) == 0)
    {
        cout << host << " connected on port " << service << endl;
    }
    else
    {
        inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
        cout << host << " connected on port " << ntohs(client.sin_port) << endl;
    }
    // Close listening socket
    close(socket);
}


int main()
{
    bserver bserver;

    // Se crea el socket
    int listening = socket(AF_INET, SOCK_STREAM, 0);
    bserver.listener(listening);
    // Se une la ip con el puerto del Socket.
    bserver.binder(listening);
    listen(listening, SOMAXCONN);

    // Wait for a connection
    sockaddr_in client;
    socklen_t clientSize = sizeof(client);
    int clientSocket = accept(listening, (sockaddr*)&client, &clientSize);
    bserver.waiter(listening, client,clientSize);



    // While loop: accept and echo message back to client

    char buf[bserver.buffersize];
    int buffersize = bserver.buffersize;
    while (true)
    {
        memset( buf, 0, buffersize);

        // Wait for client to send data
        int bytesReceived = recv(clientSocket, buf, buffersize, 0);

        if( string(buf, 0, bytesReceived) == "Exit"){
            close(clientSocket);
        }
        if (bytesReceived == -1)
        {
            cerr << "Error in recv(). Quitting" << endl;
            break;
        }

        if (bytesReceived == 0)
        {
            cout << "Client disconnected " << endl;
            break;
        }

        cout << string(buf, 0, bytesReceived) << endl;

        // Echo message back to client
        send(clientSocket, buf, bytesReceived + 1, 0);
    }

    // Close the socket
    close(clientSocket);

    return 0;
}