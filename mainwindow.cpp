#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::butclick(QString N)
{
    if (not sign)
    {
        b*=10;
        b+=N.toInt();
    } else {
        b1*=10;
        b1+=N.toInt();
    }
    ui->lineEdit->setText(ui->lineEdit->text()+N);
}

void MainWindow::on_pushButton_clicked()
{
    MainWindow::butclick("1");
}


void MainWindow::on_pushButton_2_clicked()
{
    MainWindow::butclick("2");
}


void MainWindow::on_pushButton_3_clicked()
{
    MainWindow::butclick("3");
}


void MainWindow::on_pushButton_4_clicked()
{
    MainWindow::butclick("4");
}


void MainWindow::on_pushButton_5_clicked()
{
    MainWindow::butclick("5");
}


void MainWindow::on_pushButton_6_clicked()
{
    MainWindow::butclick("6");
}


void MainWindow::on_pushButton_7_clicked()
{
    MainWindow::butclick("7");
}


void MainWindow::on_pushButton_8_clicked()
{
    MainWindow::butclick("8");
}


void MainWindow::on_pushButton_9_clicked()
{
    MainWindow::butclick("9");
}


void MainWindow::on_pushButton_10_clicked()
{
    MainWindow::butclick("0");
}



void MainWindow::on_pushButton_11_clicked()
{
    s=1;
    if (sign)
    {
        ui->lineEdit->clear();
        ui->lineEdit->setText(QString::number(b));
    }
    sign=true;
    ui->lineEdit->setText(ui->lineEdit->text()+"+");
}


void MainWindow::on_pushButton_12_clicked()
{
    s=2;
    if (sign)
    {
        ui->lineEdit->clear();
        ui->lineEdit->setText(QString::number(b));
    }
    sign=true;
    ui->lineEdit->setText(ui->lineEdit->text()+"-");
}


void MainWindow::on_pushButton_13_clicked()
{
    s=3;
    if (sign)
    {
        ui->lineEdit->clear();
        ui->lineEdit->setText(QString::number(b));
    }
    sign=true;
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
}


void MainWindow::on_pushButton_14_clicked()
{
    s=4;
    if (sign)
    {
        ui->lineEdit->clear();
        ui->lineEdit->setText(QString::number(b));
    }
    sign=true;
    ui->lineEdit->setText(ui->lineEdit->text()+"/");
}


void MainWindow::on_pushButton_15_clicked()
{
    sign=false;
    ui->lineEdit->clear();
    if (s==1)
    {

    }
}

