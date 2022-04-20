#include "gui.h"
#include "./ui_gui.h"
#include "QString"
#include "cliente.cpp"
#include <QTime>
//direction_xxxx
QString d_default = "/home/angelo/CLionProjects/Project1-DataStructure2/Project1-DataStructure2/cards/mushroom.png";
QString A = "/home/angelo/CLionProjects/Project1-DataStructure2/Project1-DataStructure2/cards/sword.png";
QString B = "/home/angelo/CLionProjects/Project1-DataStructure2/Project1-DataStructure2/cards/zatik.png";
QString C = "/home/angelo/CLionProjects/Project1-DataStructure2/Project1-DataStructure2/megaman.png";
QString D = "//home/angelo/CLionProjects/Project1-DataStructure2/Project1-DataStructure2/cards/mini_link.png";
QString E = "/home/angelo/CLionProjects/Project1-DataStructure2/Project1-DataStructure2/cards/mda.png";
QString F = "/home/angelo/CLionProjects/Project1-DataStructure2/Project1-DataStructure2/cards/donkey.png";
QString G = "/home/angelo/CLionProjects/Project1-DataStructure2/Project1-DataStructure2/cards/mario.png";
string  cards[8] = {"A","B","C","D","E","F","G"};
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
    ui->pushButton_16->setIcon(
                QIcon(d_default));
    ui->pushButton_17->setIcon(
                QIcon(d_default));
    ui->pushButton_18->setIcon(
                QIcon(d_default));
    ui->pushButton_19->setIcon(
                QIcon(d_default));
    ui->pushButton_20->setIcon(
                QIcon(d_default));
    ui->pushButton_21->setIcon(
                QIcon(d_default));
    ui->pushButton_22->setIcon(
                QIcon(d_default));
    ui->pushButton_23->setIcon(
                QIcon(d_default));
    ui->pushButton_24->setIcon(
                QIcon(d_default));
    ui->pushButton_25->setIcon(
                QIcon(d_default));
    ui->pushButton_26->setIcon(
                QIcon(d_default));
    ui->pushButton_27->setIcon(
                QIcon(d_default));
    ui->pushButton_28->setIcon(
                QIcon(d_default));
   ui->pushButton_29->setIcon(QIcon(d_default));
   ui->pushButton_30->setIcon(QIcon(d_default));
}

gui::~gui()
{
    delete ui;
}
void delay()
{
    QTime dieTime= QTime::currentTime().addSecs(2);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

vector<string> gui::acces_id(string text) {
    string id = "";
    vector<string> commands;
    for (auto x : text)
    {
        if (x == ' ')
        {
            //cout << word << endl;
            commands.push_back(id);
            id = "";
        }
        else {
            id = id + x;
        }
    }
    //cout << word << endl;
    return commands;
}


void gui::on_pushButton_clicked()
{
    bclient client;
    string received = client.build_client(1);
    vector<string> commands = this->acces_id(received);

    for(int i=0; i < 8 ; i++){
        if(commands[0] == cards[i]){
            ui->pushButton->setIcon(QIcon(direction_cards[i]));
        }
    }
    delay();
    if(commands[1]== "1" and press != ui->pushButton){
        ui->pushButton->hide();
       this->press->hide();
       this->press = neutral;
       this->pts = stoi(commands[1]);
    }else{
        this->press = ui->pushButton;
        ui->pushButton->setIcon(QIcon(d_default));
    }

}



void gui::on_pushButton_2_clicked()
{
    bclient client;
    string received = client.build_client(2);
    vector<string> commands = this->acces_id(received);
    for(int i=0; i < 8 ; i++){
        if(commands[0] == cards[i]){
            ui->pushButton_2->setIcon(QIcon(direction_cards[i]));
        }
    }
    delay();
    if(commands[1]== "1" and press != ui->pushButton_2){
        ui->pushButton_2->hide();
       this->press->hide();
       this->press = neutral;
       this->pts = stoi(commands[1]);
    }else{
        this->press = ui->pushButton_2;
        ui->pushButton_2->setIcon(QIcon(d_default));
    }

}

void gui::on_pushButton_3_clicked()
{
    bclient client;
    string received = client.build_client(3);
    vector<string> commands = this->acces_id(received);

    for(int i=0; i < 8 ; i++){
        if(commands[0] == cards[i]){
            ui->pushButton_3->setIcon(QIcon(direction_cards[i]));
        }
    }
    delay();
    if(commands[1]== "1" and press != ui->pushButton_3){
        ui->pushButton_3->hide();
       this->press->hide();
       this->press = neutral;
       this->pts = stoi(commands[1]);
    }else{
        this->press = ui->pushButton_3;
        ui->pushButton_3->setIcon(QIcon(d_default));
    }

}


void gui::on_pushButton_4_clicked()
{
    bclient client;
    string received = client.build_client(4);
    vector<string> commands = this->acces_id(received);

    for(int i=0; i < 8 ; i++){
        if(commands[0] == cards[i]){
            ui->pushButton_4->setIcon(QIcon(direction_cards[i]));
        }
    }
    delay();
    if(commands[1]== "1" and press != ui->pushButton_4){
        ui->pushButton_4->hide();
       this->press->hide();
       this->press = neutral;
       this->pts = stoi(commands[1]);
    }else{
        this->press = ui->pushButton_4;
        ui->pushButton_4->setIcon(QIcon(d_default));
    }

}


void gui::on_pushButton_5_clicked()
{
    bclient client;
    string received = client.build_client(5);
    vector<string> commands = this->acces_id(received);

    for(int i=0; i < 8 ; i++){
        if(commands[0] == cards[i]){
            ui->pushButton_5->setIcon(QIcon(direction_cards[i]));
        }
    }
    delay();
    if(commands[1]== "1" and press != ui->pushButton_5){
        ui->pushButton_5->hide();
       this->press->hide();
       this->press = neutral;
       this->pts = stoi(commands[1]);
    }else{
        this->press = ui->pushButton_5;
        ui->pushButton_5->setIcon(QIcon(d_default));
    }
}

void gui::on_pushButton_6_clicked()
{

    bclient client;
    string received = client.build_client(6);
    vector<string> commands = this->acces_id(received);

    for(int i=0; i < 8 ; i++){
        if(commands[0] == cards[i]){
            ui->pushButton_6->setIcon(QIcon(direction_cards[i]));
        }
    }
    delay();
    if(commands[1]== "1" and press != ui->pushButton_6){
        ui->pushButton_6->hide();
       this->press->hide();
       this->press = neutral;
       this->pts = stoi(commands[1]);
    }else{
        this->press = ui->pushButton_6;
        ui->pushButton_6->setIcon(QIcon(d_default));
    }
}

void gui::on_pushButton_7_clicked()
{    bclient client;
     string received = client.build_client(7);
     vector<string> commands = this->acces_id(received);
      for(int i=0; i < 8 ; i++){
          if(commands[0] == cards[i]){
              ui->pushButton_7->setIcon(QIcon(direction_cards[i]));
          }
      }
      delay();
      if(commands[1]== "1" and press != ui->pushButton_7){
          ui->pushButton_7->hide();
         this->press->hide();
         this->press = neutral;
         this->pts = stoi(commands[1]);
      }else{
          this->press = ui->pushButton_7;
          ui->pushButton_7->setIcon(QIcon(d_default));
      }
}
void gui::on_pushButton_8_clicked()
{    bclient client;
     string received = client.build_client(8);
     vector<string> commands = this->acces_id(received);

      for(int i=0; i < 8 ; i++){
          if(commands[0] == cards[i]){
              ui->pushButton_8->setIcon(QIcon(direction_cards[i]));
          }
      }
      delay();
      if(commands[1]== "1" and press != ui->pushButton_8){
          ui->pushButton_8->hide();
         this->press->hide();
         this->press = neutral;
         this->pts = stoi(commands[1]);
      }else{
          this->press = ui->pushButton_8;
          ui->pushButton_8->setIcon(QIcon(d_default));
      }
}

void gui::on_pushButton_9_clicked()
{    bclient client;
     string received = client.build_client(9);
     vector<string> commands = this->acces_id(received);
      for(int i=0; i < 8 ; i++){
          if(commands[0] == cards[i]){
              ui->pushButton_9->setIcon(QIcon(direction_cards[i]));
          }
      }
      delay();
      if(commands[1]== "1" and press != ui->pushButton_9){
          ui->pushButton_9->hide();
         this->press->hide();
         this->press = neutral;
         this->pts = stoi(commands[1]);
      }else{
          this->press = ui->pushButton_9;
          ui->pushButton_9->setIcon(QIcon(d_default));
      }
}
void gui::on_pushButton_10_clicked()
{    bclient client;
     string received = client.build_client(10);
     vector<string> commands = this->acces_id(received);
      for(int i=0; i < 8 ; i++){
          if(commands[0] == cards[i]){
              ui->pushButton_10->setIcon(QIcon(direction_cards[i]));
          }
      }
      delay();
      if(commands[1]== "1" and press != ui->pushButton_10){
          ui->pushButton_10->hide();
         this->press->hide();
         this->press = neutral;
         this->pts = stoi(commands[1]);
      }else{
          this->press = ui->pushButton_10;
          ui->pushButton_10->setIcon(QIcon(d_default));
      }

}
void gui::on_pushButton_11_clicked()
{    bclient client;
     string received = client.build_client(11);
     vector<string> commands = this->acces_id(received);
      for(int i=0; i < 8 ; i++){
          if(commands[0] == cards[i]){
              ui->pushButton_11->setIcon(QIcon(direction_cards[i]));
          }
      }
      delay();
      if(commands[1]== "1" and press != ui->pushButton_11){
          ui->pushButton_11->hide();
         this->press->hide();
         this->press = neutral;
         this->pts = stoi(commands[1]);
      }else{
          this->press = ui->pushButton_11;
          ui->pushButton_11->setIcon(QIcon(d_default));
      }

}
void gui::on_pushButton_12_clicked()
{    bclient client;
     string received = client.build_client(12);
     vector<string> commands = this->acces_id(received);
      for(int i=0; i < 8 ; i++){
          if(commands[0] == cards[i]){
              ui->pushButton_12->setIcon(QIcon(direction_cards[i]));
          }
      }
      delay();
      if(commands[1]== "1" and press != ui->pushButton_12){
          ui->pushButton_12->hide();
         this->press->hide();
         this->press = neutral;
         this->pts = stoi(commands[1]);
      }else{
          this->press = ui->pushButton_12;
          ui->pushButton_12->setIcon(QIcon(d_default));
      }
}
void gui::on_pushButton_13_clicked()
{    bclient client;
     string received = client.build_client(13);
     vector<string> commands = this->acces_id(received);
      for(int i=0; i < 8 ; i++){
          if(commands[0] == cards[i]){
              ui->pushButton_13->setIcon(QIcon(direction_cards[i]));
          }
      }
      delay();
      if(commands[1]== "1" and press != ui->pushButton_13){
          ui->pushButton_13->hide();
         this->press->hide();
         this->press = neutral;
         this->pts = stoi(commands[1]);
      }else{
          this->press = ui->pushButton_13;
          ui->pushButton_13->setIcon(QIcon(d_default));
      }

}
void gui::on_pushButton_14_clicked()
{    bclient client;
     string received = client.build_client(14);
     vector<string> commands = this->acces_id(received);
      for(int i=0; i < 8 ; i++){
          if(commands[0] == cards[i]){
              ui->pushButton_14->setIcon(QIcon(direction_cards[i]));
          }
      }
      delay();
      if(commands[1]== "1" and press != ui->pushButton_14){
          ui->pushButton_14->hide();
         this->press->hide();
         this->press = neutral;
         this->pts = stoi(commands[1]);
      }else{
          this->press = ui->pushButton_14;
          ui->pushButton_14->setIcon(QIcon(d_default));
      }

}
void gui::on_pushButton_15_clicked()
{    bclient client;
     string received = client.build_client(15);
     vector<string> commands = this->acces_id(received);
      for(int i=0; i < 8 ; i++){
          if(commands[0] == cards[i]){
              ui->pushButton_15->setIcon(QIcon(direction_cards[i]));
          }
      }
      delay();
      if(commands[1]== "1" and press != ui->pushButton_15){
          ui->pushButton_15->hide();
         this->press->hide();
         this->press = neutral;
         this->pts = stoi(commands[1]);
      }else{
          this->press = ui->pushButton_15;
          ui->pushButton_15->setIcon(QIcon(d_default));
      }
}

void gui::on_pushButton_16_clicked()
{
    bclient client;
         string received = client.build_client(16);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_16->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_16){
              ui->pushButton_16->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton_16;
              ui->pushButton_16->setIcon(QIcon(d_default));
          }

}
void gui::on_pushButton_17_clicked()
{
    bclient client;
         string received = client.build_client(17);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_17->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_17){
              ui->pushButton_17->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton_17;
              ui->pushButton_17->setIcon(QIcon(d_default));
          }

}


void gui::on_pushButton_18_clicked()
{
    bclient client;
         string received = client.build_client(18);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_18->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_18){
              ui->pushButton_18->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton;
              ui->pushButton_18->setIcon(QIcon(d_default));
          }

}

void gui::on_pushButton_19_clicked()
{
    bclient client;
         string received = client.build_client(19);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_19->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_19){
              ui->pushButton_19->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton_19;
              ui->pushButton_19->setIcon(QIcon(d_default));
          }

}


void gui::on_pushButton_20_clicked()
{
    bclient client;
         string received = client.build_client(20);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_20->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_20){
              ui->pushButton_20->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton_21;
              ui->pushButton_20->setIcon(QIcon(d_default));
          }

}


void gui::on_pushButton_21_clicked()
{
    bclient client;
         string received = client.build_client(21);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_21->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_21){
              ui->pushButton_21->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton;
              ui->pushButton_21->setIcon(QIcon(d_default));
          }

}


void gui::on_pushButton_22_clicked()
{
    bclient client;
         string received = client.build_client(22);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_22->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_22){
              ui->pushButton_22->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton_22;
              ui->pushButton_22->setIcon(QIcon(d_default));
          }

}


void gui::on_pushButton_23_clicked()
{
    bclient client;
         string received = client.build_client(23);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_23->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_23){
              ui->pushButton_23->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton_23;
              ui->pushButton_23->setIcon(QIcon(d_default));
          }

}


void gui::on_pushButton_24_clicked()
{
    bclient client;
         string received = client.build_client(24);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_24->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_24){
              ui->pushButton_24->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton_24;
              ui->pushButton_24->setIcon(QIcon(d_default));
          }

}


void gui::on_pushButton_25_clicked()
{
    bclient client;
         string received = client.build_client(25);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_25->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_25){
              ui->pushButton_25->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton_25;
              ui->pushButton_25->setIcon(QIcon(d_default));
          }

}


void gui::on_pushButton_26_clicked()
{
    bclient client;
         string received = client.build_client(26);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_26->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_26){
              ui->pushButton_26->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton_26;
              ui->pushButton_26->setIcon(QIcon(d_default));
          }

}

void gui::on_pushButton_27_clicked()
{
    bclient client;
         string received = client.build_client(27);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_27->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_27){
              ui->pushButton_27->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton_27;
              ui->pushButton_27->setIcon(QIcon(d_default));
          }
}


void gui::on_pushButton_28_clicked()
{
    bclient client;
         string received = client.build_client(28);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_28->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_28){
              ui->pushButton_28->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton_28;
              ui->pushButton_28->setIcon(QIcon(d_default));
          }
}

void gui::on_pushButton_29_clicked()
{
    bclient client;
         string received = client.build_client(29);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_29->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_29){
              ui->pushButton_29->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton_29;
              ui->pushButton_29->setIcon(QIcon(d_default));
          }

}


void gui::on_pushButton_30_clicked()
{
    bclient client;
         string received = client.build_client(30);
         vector<string> commands = this->acces_id(received);
          for(int i=0; i < 8 ; i++){
              if(commands[0] == cards[i]){
                  ui->pushButton_30->setIcon(QIcon(direction_cards[i]));
              }
          }
          delay();
          if(commands[1]== "1" and press != ui->pushButton_30){
              ui->pushButton_30->hide();
             this->press->hide();
             this->press = neutral;
             this->pts = stoi(commands[1]);
          }else{
              this->press = ui->pushButton;
              ui->pushButton_30->setIcon(QIcon(d_default));
          }

}






