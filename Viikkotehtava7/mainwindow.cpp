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

void MainWindow::on_lisaaNappi_clicked()
{
    //1. Lue numero elementistä
    QString str = ui->numeroNaytto->text();
    int num = str.toInt();
    qDebug() << "Numero = " << num;
    //2. Kasvata numeroa yhdellä
    num++;
    //3. Aseta numero takaisin elementtiin
    qDebug() << "Kasvatettu numero = " << num;
    QString uusStr = QString::number(num);
    ui->numeroNaytto->setText(uusStr);
}


void MainWindow::on_resetNappi_clicked()
{
    //1. Aseta nolla elementtiin
    qDebug() << "Numero nollattu.";
    int resetNum = 0;
    QString resetStr = QString::number(resetNum);
    ui->numeroNaytto->setText(resetStr);
}

