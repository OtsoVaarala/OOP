#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setActiveControls();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_clicked()
{
    if(state == 3){
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1+num2;

    qDebug() << "Plus: " << num1 << " + " << num2 << " = " << result;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    state = 1;
    setActiveControls();
    qDebug() << "Lasku suoritettu, palattu tilaan: " << state;
    } else {
        qDebug() << "Virhe! Molempia numeroita ei syötetty";
    }
}


void MainWindow::on_sub_clicked()
{
    if(state == 3){
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1-num2;

    qDebug() << "Substraction: " << num1 << " - " << num2 << " = " << result;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    state = 1;
    setActiveControls();
    qDebug() << "Lasku suoritettu, palattu tilaan: " << state;
    } else {
        qDebug() << "Virhe! Molempia numeroita ei syötetty";
    }
}


void MainWindow::on_mul_clicked()
{
    if(state == 3){
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1*num2;

    qDebug() << "Multiply: " << num1 << " * " << num2 << " = " << result;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    state = 1;
    setActiveControls();
    qDebug() << "Lasku suoritettu, palattu tilaan: " << state;
    } else {
        qDebug() << "Virhe! Molempia numeroita ei syötetty";
    }
}


void MainWindow::on_div_clicked()
{
    if(state == 3){
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1/num2;

    qDebug() << "Divide: " << num1 << " / " << num2 << " = " << result;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    state = 1;
    setActiveControls();
    qDebug() << "Lasku suoritettu, palattu tilaan: " << state;
    } else {
        qDebug() << "Virhe! Molempia numeroita ei syötetty";
    }
}


void MainWindow::on_N1_clicked()
{
    QString str = ui->N1->text();
    int n = str.toInt();
    numberClickedHandler(n);
}


void MainWindow::on_N2_clicked()
{
    QString str = ui->N2->text();
    int n = str.toInt();
    numberClickedHandler(n);
}


void MainWindow::on_N3_clicked()
{
    QString str = ui->N3->text();
    int n = str.toInt();
    numberClickedHandler(n);
}


void MainWindow::on_N4_clicked()
{
    QString str = ui->N4->text();
    int n = str.toInt();
    numberClickedHandler(n);
}


void MainWindow::on_N5_clicked()
{
    QString str = ui->N5->text();
    int n = str.toInt();
    numberClickedHandler(n);
}


void MainWindow::on_N6_clicked()
{
    QString str = ui->N6->text();
    int n = str.toInt();
    numberClickedHandler(n);
}


void MainWindow::on_N7_clicked()
{
    QString str = ui->N7->text();
    int n = str.toInt();
    numberClickedHandler(n);
}


void MainWindow::on_N8_clicked()
{
    QString str = ui->N8->text();
    int n = str.toInt();
    numberClickedHandler(n);
}


void MainWindow::on_N9_clicked()
{
    QString str = ui->N9->text();
    int n = str.toInt();
    numberClickedHandler(n);
}


void MainWindow::on_N0_clicked()
{
    QString str = ui->N0->text();
    int n = str.toInt();
    numberClickedHandler(n);
}

void MainWindow::numberClickedHandler(int n)
{
    qDebug() << "Valittu numero = " << n;
    QString str = QString::number(n);
    if (state == 1){
        qDebug() << "Elementti num1";
        ui->num1->setText(str);
    } else if (state == 2){
        qDebug() << "Elementti num2";
        ui->num2->setText(str);
    }
}

void MainWindow::setActiveControls()
{
    if(state == 1){
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->mul->setEnabled(false);
        ui->div->setEnabled(false);
        ui->N0->setEnabled(true);
        ui->N1->setEnabled(true);
        ui->N2->setEnabled(true);
        ui->N3->setEnabled(true);
        ui->N4->setEnabled(true);
        ui->N5->setEnabled(true);
        ui->N6->setEnabled(true);
        ui->N7->setEnabled(true);
        ui->N8->setEnabled(true);
        ui->N9->setEnabled(true);
    } else if (state == 2){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
        ui->add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->mul->setEnabled(false);
        ui->div->setEnabled(false);
        ui->N0->setEnabled(true);
        ui->N1->setEnabled(true);
        ui->N2->setEnabled(true);
        ui->N3->setEnabled(true);
        ui->N4->setEnabled(true);
        ui->N5->setEnabled(true);
        ui->N6->setEnabled(true);
        ui->N7->setEnabled(true);
        ui->N8->setEnabled(true);
        ui->N9->setEnabled(true);
    } else if (state == 3){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->add->setEnabled(true);
        ui->sub->setEnabled(true);
        ui->mul->setEnabled(true);
        ui->div->setEnabled(true);
        ui->N0->setEnabled(false);
        ui->N1->setEnabled(false);
        ui->N2->setEnabled(false);
        ui->N3->setEnabled(false);
        ui->N4->setEnabled(false);
        ui->N5->setEnabled(false);
        ui->N6->setEnabled(false);
        ui->N7->setEnabled(false);
        ui->N8->setEnabled(false);
        ui->N9->setEnabled(false);
    }
}


void MainWindow::on_enter_clicked()
{
    if(state >= 3){
        state = 3;
    } else {
    state++;
    }
    qDebug() << "Siirrytty tilaan: " << state;
    setActiveControls();
}


void MainWindow::on_clear_clicked()
{
    qDebug() << "Numerot nollattu.";
    int resetNum = 0;
    QString resetStr = QString::number(resetNum);
    ui->num1->setText(resetStr);
    ui->num2->setText(resetStr);
    ui->result->setText(resetStr);
    state = 1;
    qDebug() << "Palattu tilaan: " << state;
}

