#include "gui.h"
#include "./ui_gui.h"
#include "QString"
#include "cliente.cpp"
//direction_xxxx
QString d_default = "/home/angelo/CLionProjects/Project1-DataStructure2/Project1-DataStructure2/cards/mushroom.png";
QString A = "/home/angelo/tester/cards/sword.png";

QString B = "/home/angelo/tester/cards/zatik.png";

QString C = "/home/angelo/tester/cards/megaman.png";

QString D = "/home/angelo/tester/cards/mini_link.png";

QString E = "/home/angelo/tester/cards/mda.png";

QString F = "/home/angelo/CLionProjects/Project1-DataStructure2/Project1-DataStructure2/cards/mushroom.png";
QString G = "/home/angelo/CLionProjects/Project1-DataStructure2/Project1-DataStructure2/cards/";

string  cards[8] = {"TipoA","TipoB","TipoC","TipoD","TipoE"};
QString  direction_cards[8] = {A,B,C,D,E,F,G};

gui::gui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gui)





{
    ui->setupUi(this);

    ui->pushButton->setIcon(
                QIcon(d_default));
    ui->pushButton_2->setIcon(
                QIcon(d_default));
    ui->pushButton_3->setIcon(
                QIcon(d_default));
    ui->pushButton_4->setIcon(
                QIcon(d_default));
    ui->pushButton_5->setIcon(
                QIcon(d_default));
    ui->pushButton_6->setIcon(
                QIcon(d_default));
    ui->pushButton_7->setIcon(
                QIcon(d_default));
    ui->pushButton_8->setIcon(
                QIcon(d_default));
    ui->pushButton_9->setIcon(
                QIcon(d_default));
    ui->pushButton_10->setIcon(
                QIcon(d_default));
    ui->pushButton_11->setIcon(
                QIcon(d_default));
    ui->pushButton_12->setIcon(
                QIcon(d_default));
    ui->pushButton_13->setIcon(
                QIcon(d_default));
    ui->pushButton_14->setIcon(
                QIcon(d_default));
    ui->pushButton_15->setIcon(
                QIcon(d_default));
}

gui::~gui()
{
    delete ui;
}

vector<string> gui::acces_id(string text) {
    string word = "";
    vector<string> words;
    for (auto x : text)
    {
        if (x == ' ')
        {
            cout << word << endl;
            words.push_back(word);
            word = "";
        }
        else {
            word = word + x;
        }
    }
    cout << word << endl;
    return words;
}


void gui::on_pushButton_clicked()
{
    bclient client;
    string received = client.build_client(1);
    vector<string> commands = this->acces_id(received);

    for(int i=0; i <6 ; i++){
        if(commands[0] == cards[i]){
            ui->pushButton->setIcon(QIcon(direction_cards[i]));
        }

    }
    sleep(1);

}


void gui::on_pushButton_2_clicked()
{
    bclient client;
    string received = client.build_client(2);
    vector<string> commands = this->acces_id(received);

    for(int i=0; i <6 ; i++){
        if(commands[0] == cards[i]){
            ui->pushButton_2->setIcon(QIcon(direction_cards[i]));
        }

    }
    sleep(1);

}


void gui::on_pushButton_3_clicked()
{
    bclient client;
    string received = client.build_client(3);
    vector<string> commands = this->acces_id(received);

    for(int i=0; i <6 ; i++){
        if(commands[0] == cards[i]){
            ui->pushButton_3->setIcon(QIcon(direction_cards[i]));
        }

    }
    sleep(1);

}


void gui::on_pushButton_4_clicked()
{
    bclient client;
    string received = client.build_client(4);
    vector<string> commands = this->acces_id(received);

    for(int i=0; i <6 ; i++){
        if(commands[0] == cards[i]){
            ui->pushButton_4->setIcon(QIcon(direction_cards[i]));
        }

    }
    sleep(1);

}


void gui::on_pushButton_5_clicked()
{
    bclient client;
    string received = client.build_client(5);
    vector<string> commands = this->acces_id(received);

    for(int i=0; i <6 ; i++){
        if(commands[0] == cards[i]){
            ui->pushButton_5->setIcon(QIcon(direction_cards[i]));
        }

    }
    sleep(1);
}

void gui::on_pushButton_6_clicked()
{

    bclient client;
    string received = client.build_client(6);
    vector<string> commands = this->acces_id(received);

    for(int i=0; i <6 ; i++){
        if(commands[0] == cards[i]){
            ui->pushButton_6->setIcon(QIcon(direction_cards[i]));
        }

    }
    sleep(1);
}

void gui::on_pushButton_7_clicked()
{    bclient client;
     string received = client.build_client(7);
     vector<string> commands = this->acces_id(received);

     for(int i=0; i <6 ; i++){
         if(commands[0] == cards[i]){
             ui->pushButton_7->setIcon(QIcon(direction_cards[i]));
         }

     }
     sleep(1);

}
void gui::on_pushButton_8_clicked()
{    bclient client;
     string received = client.build_client(8);
     vector<string> commands = this->acces_id(received);

     for(int i=0; i <6 ; i++){
         if(commands[0] == cards[i]){
             ui->pushButton_8->setIcon(QIcon(direction_cards[i]));
         }

     }
     sleep(1);

}

void gui::on_pushButton_9_clicked()
{    bclient client;
     string received = client.build_client(9);
     vector<string> commands = this->acces_id(received);

     for(int i=0; i <6 ; i++){
         if(commands[0] == cards[i]){
             ui->pushButton_9->setIcon(QIcon(direction_cards[i]));
         }

     }
     sleep(1);

}
void gui::on_pushButton_10_clicked()
{    bclient client;
     string received = client.build_client(10);
     vector<string> commands = this->acces_id(received);

     for(int i=0; i <6 ; i++){
         if(commands[0] == cards[i]){
             ui->pushButton_10->setIcon(QIcon(direction_cards[i]));
         }

     }
     sleep(1);

}
void gui::on_pushButton_11_clicked()
{    bclient client;
     string received = client.build_client(11);
     vector<string> commands = this->acces_id(received);

     for(int i=0; i <6 ; i++){
         if(commands[0] == cards[i]){
             ui->pushButton_11->setIcon(QIcon(direction_cards[i]));
         }

     }
     sleep(1);

}
void gui::on_pushButton_12_clicked()
{    bclient client;
     string received = client.build_client(12);
     vector<string> commands = this->acces_id(received);

     for(int i=0; i <6 ; i++){
         if(commands[0] == cards[i]){
             ui->pushButton_12->setIcon(QIcon(direction_cards[i]));
         }

     }
     sleep(1);

}
void gui::on_pushButton_13_clicked()
{    bclient client;
     string received = client.build_client(13);
     vector<string> commands = this->acces_id(received);

     for(int i=0; i <6 ; i++){
         if(commands[0] == cards[i]){
             ui->pushButton_13->setIcon(QIcon(direction_cards[i]));
         }

     }
     sleep(1);

}
void gui::on_pushButton_14_clicked()
{    bclient client;
     string received = client.build_client(14);
     vector<string> commands = this->acces_id(received);

     for(int i=0; i <6 ; i++){
         if(commands[0] == cards[i]){
             ui->pushButton_14->setIcon(QIcon(direction_cards[i]));
         }

     }
     sleep(1);

}
void gui::on_pushButton_15_clicked()
{    bclient client;
     string received = client.build_client(15);
     vector<string> commands = this->acces_id(received);

     for(int i=0; i <6 ; i++){
         if(commands[0] == cards[i]){
             ui->pushButton_15->setIcon(QIcon(direction_cards[i]));
         }

     }
     sleep(1);

}
