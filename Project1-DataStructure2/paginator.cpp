#include "paginator.h"
#include "dynamic_matrix.cpp"


/**
 * Instituto Tecnologico de Costa Rica
 * Area de Ingenieria en Computadores
 *
 * Lenguaje: C++.
 * Clase paginator
 * @author Angelo Ceciliano Ortega.
 * @version 1.0.
 *
 * Descripcion: Se encargar de brindar la carta solicitada y
 *  evalua la seleccion de las cartas.
 */
class paginator
{


public:
    dynamicmatrix matrix;
    int count = 0;
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
  //constructor
  paginator(){
        this->matrix.create_board();
        this->shuffle();
        count = 0;
    }
  /**
   * Este metodo da la carta solicitada.
   * @param card_num
   * @return retorna la carta solicitada
   */
    string get_card(int card_num){
        this->count++;
        string cardType = find_card(card_num).type;
        if (count%2 != 0){
            this->firstCard = cardType;
        }
        return cardType;
    }
    /**
     * Este metodo baraja las cartas.
     */
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
    /**
     *Busca si la carta esta en el array de cartas de referencia
     * @param card_num
     * @return retorna la carta solicitada o realiza un swap
     */
    card_struture find_card(int card_num){
        for(int i = 0; i < 11;i++){
            if(card_num == array_cards[i].num){
                this->array_cards[i].card_play();
                return array_cards[i];
            }
        }
            return this->swap(card_num);
    }

    /**
     * Cambia la carta por la solicitada
     * @param card_number
     * @return retorna la carta solicitada
     */
   card_struture swap(int card_number){
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
   /**
    * Compara las cartas
    * @param card
    * @return retorna string "1" si son iguales,
    * "0" si no son iguales, "x" si no se puede comparar.
    */
    string compare(string card){
        if (this->count%2 == 0){
            if(this->firstCard == card){
                    return "1";
            }else{
                return "0";
            }
        }
        return "x";
    }
    void reset(){
        /**
         * Se reinician las cartas para que sean jugables nuevamente.
         */
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





