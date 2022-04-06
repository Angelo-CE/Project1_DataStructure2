//
// Created by angelo on 29/3/22.
//

#ifndef INC_1PROJECTTESTER_BCLIENT_H
#define INC_1PROJECTTESTER_BCLIENT_H
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>

class bclient {

private:

    sockaddr_in client;
    socklen_t clientSize = sizeof(client);
    sockaddr_in hint;
    int port = 54000;
    char buffer[1024];
    int buffersize = 1024;
    int listener(int socket);

public:
    void sender(), receive();


};



#endif //INC_1PROJECTTESTER_BCLIENT_H
