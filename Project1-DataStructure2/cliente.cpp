#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string>
#include <cstring>

using namespace std;

class bclient {
public:

public:
    //Creacion del socket
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    string error= "Error al conectar cliente y server";
    //se crea la estrutra hint para que se conecte al client
    int port = 54000;
    string ipAdress = "127.0.0.1";
    sockaddr_in hint;

    //Buffer, para el envio de datos entre cliente y server
    char buffer[4096];
    int buffersize = 4096;
    //Verificar que se haya creado el socket
    int listener(){
        if (sock == -1)
        {
            return 1;
        }
    }


    string build_client(int num) {


        //Create socket
        listener();

        hint.sin_family = AF_INET;
        hint.sin_port = htons(port);
        inet_pton(AF_INET, ipAdress.c_str(), &hint.sin_addr);
        //Se crea la conexion
        int connect_result = connect(sock, (sockaddr*)&hint, sizeof(hint));
        if (connect_result == -1) {
            return error;
        }


        string user = to_string(num);
        //While loop:
        while(true) {
            //Envia al servidor
                int send_res = send(sock, user.c_str(), user.size() + 1, 0);
                if (send_res == -1) {
                    cout << "No se envio nada! /r/n";
                continue;}

            //Espera la respuesta del servidor
            memset(buffer, 0, buffersize);
            int bytes_res = recv(sock, buffer,4096, 0);
            if (bytes_res == -1) {
                cout << "There was a problem getting response from server/r/n";
            } else {
                //Muestra la respuesta en consola
                string server_res = string(buffer, 0,bytes_res);
                //Se cierra el cliente para que no se haga un bucle infinito
                close(sock);
                return server_res;
            }
        }
        //se cierra corretamente
        close(sock);
        return "";
    }
};
