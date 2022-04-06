//
// Created by angelo on 29/3/22.
//
#include "bclient.h"
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>
#include "bserver.h"

using namespace std;

int sock = socket(AF_INET, SOCK_STREAM, 0);
int port = 54000;
string ipAddress = "127.0.0.1";
sockaddr_in hint;
//hint.sin_family = AF_INET;
//hint.sin_port = htons(port);
//inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);
char buf[4096];
string userInput;

int bclient::listener(int socket) {
    if (socket == -1)
    {
        return 1;
    }
}

void bclient::sender() {
    string userInput;
    cout << "> ";
    getline(cin, userInput);

    int sendRes = send(sock, userInput.c_str(), userInput.size() + 1, 0);
    if (sendRes == -1)
    {
        cout << "Could not send to server! Whoops!\r\n";
    }
}
void bclient::receive() {
    memset(buf, 0, 4096);
    int bytesReceived = recv(sock, buf, 4096, 0);
    if (bytesReceived == -1)
    {
        cout << "There was an error getting response from server\r\n";
    }else if (string(buf, bytesReceived)=="Exit"){
        close(sock);

    }

    /*
    int main(){
        bclient bclient;
        bclient.listener(sock);

        int connectRes = connect(sock, (sockaddr*)&hint, sizeof(hint));
        if (connectRes == -1)
        {
            return 1;
        }
        while(true){
            bclient.sender();
            bclient.receive()

        }else{
            cout << "SERVER> " << string(buf, bytesReceived) << "\r\n";
        }

        close(sock);
        return 0;
    };
    */