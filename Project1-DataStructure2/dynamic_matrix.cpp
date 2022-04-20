#include "dynamic_matrix.h"

#include <iostream>
#include <unistd.h>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include  <sstream>
#include <card_struture.cpp>
using namespace std;

class dynamicmatrix
{

public:
vector<int> cards_in_mem;

//private:
int **ptr_mtx = nullptr;
int ** line_2;
int matrix[5][6];



   void create_board(){
       //Se crea el tablero y contiene la lista de la cartas
       //Aca se generan las cartas de contendra la matrix, como
       // la matrix es [5][6], es decir 30 casilla, se debera repartir en pares
       // entonces para incluir a cada tipo se meten 4 cartas y uno de 2, asi daran 30 cartas en total.
        int A = 0,B = 0,C = 0,D = 0, E = 0, F = 0, G = 0;
        int i = 30;
        vector<string> board;
        vector<string> types = {"A", "B", "C", "D", "E","F","G"};
         srand(time(NULL));
        while (i > 0) {
            string randomType = types[rand() % types.size()];
            if(randomType == "A" and A < 4){
                board.push_back("A");
                A +=1;
                i -= 1;
            }
            if(randomType == "B" and B < 4){
                board.push_back("B");
                A +=1;
                i -= 1;
            }
            if(randomType == "C" and C < 4){
                board.push_back("C");
                A +=1;
                i -= 1;
            }
            if(randomType == "D" and D < 4){
                board.push_back("D");
                A +=1;
                i -= 1;
            }
            if(randomType == "E" and E < 4){
                board.push_back("E");
                A +=1;
                i -= 1;
            }
            if(randomType == "F" and F < 4){
                board.push_back("F");
                A +=1;
                i -= 1;
            }
            if(randomType == "G" and G < 6){
                board.push_back("G");
                A +=1;
                i -= 1;
            }


        }
        write_in_matrix();
        fill_matrix(board);
        }

/*
   string fill_matrix(int num_lines , int num_colum, string num){
    ifstream file("datos.txt");
    ptr_mtx = (int**) malloc(1024*100);

    for(int i = 0; i < num_lines; i++){
        ptr_mtx[i] = (int*) malloc(1024*100);
    }

    for(int i=0; i<num_lines;i++){
        for(int j = 0; j< num_colum; j++){
            getline(file,line_2);
            *(*(ptr_mtx+i)+j) = stoi(line_2);
        }

    }

    }*/
   void write_in_matrix(){
       int count = 1;
       for(int i=0; i<5; i++){
           for(int j=0; j<6; j++){
               this->matrix[i][j] = count;
               count++;
           }
       }
   }

   void fill_matrix(vector<string> types) {
       //int count = 0;
       // aca se escribe el contenido de tabla
       //en un .txt para facilitar su manejo
       //
       ofstream file;
       file.open("matrix.txt");
       for (int i = 0; i < 5; i++) {
           if(i == 0){

           }else{
               file << "\n";
           }
           for (int j = 0, r = 0; j < 6; j++, r++) {
               file << types[r] << " ";
               //count++;
           }
       }
       file.close();
   }
   string acces_matrix(int i, int j){
       //Desde aca se accede a la matrix.txt
       // para obtener cada carta por separado
       //
       string word, line;
       int select_line = i + 1;

       ifstream file("matrix.txt");
       int a = 1;
       while (getline(file, line))
       {
           if(a == select_line){
               istringstream ss(line);
               for (int b=0; b<j+1; b++){
                   ss >> word;
               }
               break;
           }
           a++;
       }
       return word;
   }

   int card_location(int card_num, bool FoS) {
       for (int i = 0; i < 5; i++) {
           for (int j = 0; j < 6; j++) {
               if (this->matrix[i][j] == card_num) {
                   if (FoS) {
                       return i;
                   } else {
                       return j;
                   }
               }
           }
       }
       return 0;
   }

   bool container(const int & element)
   {
       // Allar la carta en memoria
       bool result = false;
       for (auto & x : this->cards_in_mem)
       {
           if (x == element)
           {
               result = true;
               break;
           }
       }
       return result;
   }

   card_struture random_card(){
       int i, j;
       srand(time(NULL));
       i = rand() %4;
       j = rand() %5;
       card_struture card = card_struture(this->acces_matrix(i,j), this->matrix[i][j]);
       return card;
   }

};















