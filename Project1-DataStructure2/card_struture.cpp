#include "card_struture.h"
#include <string>
using namespace std;

class card_struture{
public:
    string type;
    int num;
    bool active;
    bool playing;



private:
    //Estrutura de la carta
    card_struture(string i, int j){
        this->type = i;
        this->num = j;
        this->active = true;
        this->playing = false;
    }
        //Se accede a carta para obtener el estado de la carta con las siguientes funciones
    void complete(){
        this->active = false;
    }

    void card_play(){
        this->playing = true;
    }

    void card_out(){
        this->playing = false;
    }
};
