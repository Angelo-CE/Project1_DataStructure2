#ifndef GUI_H
#define GUI_H


#include <QMainWindow>
#include <string>
#include <vector>
#include <QPushButton>


using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class gui; }
QT_END_NAMESPACE

class gui : public QMainWindow
{
    Q_OBJECT

public:
    gui(QWidget *parent = nullptr);
    ~gui();


    int pts;
    int Player;

    QPushButton *neutral;
    QPushButton *press= neutral;
    QPushButton *press_1 = neutral;
    QPushButton *press_2 = neutral;


vector<string> acces_id(string text);
//void button_image(QPushButton* button, string id);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_16_clicked();
    void on_pushButton_17_clicked();
    void on_pushButton_18_clicked();
    void on_pushButton_19_clicked();
    void on_pushButton_20_clicked();
    void on_pushButton_21_clicked();
    void on_pushButton_22_clicked();
    void on_pushButton_23_clicked();
    void on_pushButton_24_clicked();
    void on_pushButton_25_clicked();
    void on_pushButton_26_clicked();
    void on_pushButton_27_clicked();
    void on_pushButton_28_clicked();
    void on_pushButton_29_clicked();
    void on_pushButton_30_clicked();

private:
    Ui::gui *ui;
};
#endif // GUI_H
