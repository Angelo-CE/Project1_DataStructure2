#include "paginator.h"
#include "dynamic_matrix.cpp"


class paginator
{
public:
    dynamicmatrix matrix;
    int count;
    string firstCard;

    card_struture c1 = card_struture("", 0);
    card_struture c2 = card_struture("", 0);
    card_struture c3 = card_struture("", 0);
    card_struture c4 = card_struture("", 0);
    card_struture c5 = card_struture("", 0);
   card_struture c6 = card_struture("", 0);
   card_struture c7 = card_struture("", 0);
   card_struture c8 = card_struture("", 0);
   card_struture c9 = card_struture("", 0);
  card_struture c10 = card_struture("", 0);

    card_struture array_cards[10] = {c1,c2,c3,c4,c5,c6,c7,c8,c9,c10};




  paginator(){
        this->matrix.create_board();
        this->shuffle();
        count = 0;
    }

    string get_card(int card_num){
        this->count++;
        string cardType = find_card(card_num).type;
        if (count%2 != 0){
            this->firstCard = cardType;
        }
        return cardType;
    }

    void shuffle(){
        this->matrix.cards_in_mem.clear();
        this->c1 = this->matrix.random_card();
        this->c2 = this->matrix.random_card();
        this->c3 = this->matrix.random_card();
        this->c4 = this->matrix.random_card();
        this->c5 = this->matrix.random_card();
        this->c6 = this->matrix.random_card();
        this->c7 = this->matrix.random_card();
        this->c8 = this->matrix.random_card();
        this->c9 = this->matrix.random_card();
        this->c10 = this->matrix.random_card();
    }

    card_struture find_card(int card_num){
        for(int i = 0; i < 11;i++){
            if(card_num == array_cards[i].num){
                this->array_cards[i].card_play();
                return array_cards[i];
            }
        }
            return this->getN_card(card_num);
    }

   card_struture getN_card(int card_number){
        int location_i = this->matrix.card_location(card_number, true);
        int location_j = this->matrix.card_location(card_number, false);
        string new_card= this->matrix.acces_matrix(location_i, location_j);

        if(this->c1.playing == false){
            this->c1 = card_struture(new_card, card_number);
            this->c1.card_play();
            return c1;
        }else{
            this->c2 = card_struture(new_card, card_number);
            this->c2.card_play();
            return c2;
        }
    }


    string compare(string card){
        if (this->count%2 == 0){
            if(this->firstCard == card){
                    return "1";
            }
        }
        return "0";
    }

    void reset(){
        this->c1.card_out();
        this->c2.card_out();
        this->c3.card_out();
        this->c4.card_out();
        this->c5.card_out();
        this->c6.card_out();
        this->c7.card_out();
        this->c8.card_out();
        this->c9.card_out();
        this->c10.card_out();
    }
};





