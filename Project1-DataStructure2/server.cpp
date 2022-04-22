#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>
#include <paginator.cpp>

/**
 * Instituto Tecnologico de Costa Rica
 * Area de Ingenieria en Computadores
 *
 * Lenguaje: C++.
 * Clase bclient
 * @author Angelo Ceciliano Ortega.
 * @version 1.0.
 *
 * Descripcion: Se encargar de enviar, recibir y evaluar las cartas y puntaje al cliente
 * a traves de un conexion tcp.
 */
using namespace std;

int port = 54000;
char buffer[4096];

int listener(int listening){
    if (listening == -1) {
        cerr << "Can't create a socket! Quitting" << endl;
        return -1;
    }

}

int build_server(paginator matrix){
    // Se crea el socket
    int server = socket(AF_INET, SOCK_STREAM, 0);
    listener(server);

    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(port);
    inet_pton(AF_INET, "0.0.0.0", &hint.sin_addr);

    bind(server, (sockaddr *) &hint, sizeof(hint));


    listen(server, SOMAXCONN);

    // Wait for a connection
    sockaddr_in client;
    socklen_t clientSize = sizeof(client);

    int clientSocket = accept(server, (sockaddr *) &client, &clientSize);

    char host[NI_MAXHOST];
    char service[NI_MAXSERV];

    memset(host, 0, NI_MAXHOST);
    memset(service, 0, NI_MAXSERV);

    if (getnameinfo((sockaddr *) &client, sizeof(client), host, NI_MAXHOST, service, NI_MAXSERV, 0) == 0) {
        cout << host << " connected on port " << service << endl;
    } else {
        inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
        cout << host << " connected on port " << ntohs(client.sin_port) << endl;
    }

    // Close listening socket
    close(server);

    // While loop: accept and echo message back to client

    while (true) {
        memset(buffer, 0, 4096);

        // Espera lo resibido del cliente
        int bytesReceived = recv(clientSocket, buffer, 4096, 0);
        if (bytesReceived == -1) {
            cerr << "Error in recv(). Quitting" << endl;
            break;
        }

        if (bytesReceived == 0) {
            cout << "Client disconnected " << endl;
            break;
        }

        string received = string(buffer, 0, bytesReceived);

        // Se evalua el dato y se envia la respuesta
        string card = matrix.get_card(stoi(received));
        string points = matrix.compare(card);
        string response = card + " " + points + " ";
        send(clientSocket, response.c_str(), response.size() + 1, 0);

    }

    // Close the socket
    close(clientSocket);
    build_server(matrix);

    return 0;
};

int main(){
    paginator matrix;
    build_server(matrix);

}
