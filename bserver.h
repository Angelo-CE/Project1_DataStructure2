//
// Created by angelo on 29/3/22.
//

#ifndef INC_1PROJECTTESTER_BSERVER_H
#define INC_1PROJECTTESTER_BSERVER_H
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>

class bserver {


public:

    sockaddr_in client;
    socklen_t clientSize = sizeof(client);
    sockaddr_in hint;
    int port = 54000;
    char buffer[1024];
    int buffersize = 1024;
    int listener(int socket);
    void binder(int socket), waiter(int socket, sockaddr_in client,socklen_t Size);

};
#endif //INC_1PROJECTTESTER_BSERVER_H
