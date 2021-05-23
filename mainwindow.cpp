#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <math.h>
#include <QtCore/qmath.h>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("+");
    ui->comboBox->addItem("-");
    ui->comboBox->addItem("*");
    ui->comboBox->addItem("/");
    ui->comboBox->addItem("^");
    ui->comboBox->addItem("a");
    ui->comboBox->addItem("log");


}
void MainWindow::ferfer(){

        QString logarithm10 = ui->Logarithm1->text();
        QString logarithm20 = ui->Logarithm2->text();
        QString base10 = ui->base1->text();
        QString base20 = ui->base2->text();
        QString power1 = ui->power->text();

            int logan10 = logarithm10.toInt();
            int logan20 = logarithm20.toInt();
            int bas10 = base10.toInt();
            int bas20 = base20.toInt();
            int pow1 = power1.toInt();








        if (ui->comboBox->currentIndex()==0){

            QString tmp4 = QString::number(((log(logan10)) / (log(bas10)))+((log(logan20)) / (log(bas20))));

                ui->lineEdit->setText(tmp4);
        }
        else if (ui->comboBox->currentIndex()==1){
            QString tmp4 = QString::number(((log(logan10)) / (log(bas10)))-((log(logan20)) / (log(bas20))));

                ui->lineEdit->setText(tmp4);

        }
        else if (ui->comboBox->currentIndex()==2){
            QString tmp4 = QString::number(((log(logan10)) / (log(bas10)))*((log(logan20)) / (log(bas20))));

                ui->lineEdit->setText(tmp4);

        }
        else if (ui->comboBox->currentIndex()==3){
            QString tmp4 = QString::number(((log(logan10)) / (log(bas10)))/((log(logan20)) / (log(bas20))));

                ui->lineEdit->setText(tmp4);

        }
        else if (ui->comboBox->currentIndex()==4){
            QString tmp4 = QString::number(pow((log(logan10)) / (log(bas10)),pow1));

                ui->lineEdit->setText(tmp4);

        }
        else if (ui->comboBox->currentIndex()==5){
            QString tmp4 = QString::number(pow(bas20,(log(logan10)) / (log(bas10))));


                ui->lineEdit->setText(tmp4);
                ui->Logarithm2->setText(tmp4);

        }
        else if (ui->comboBox->currentIndex()==6){
            QString tmp = QString::number((log(logan10)) / (log(bas10)));


                ui->lineEdit->setText(tmp);

        }

}


MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_resbutton_clicked()
{
    ferfer();
}
