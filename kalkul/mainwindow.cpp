/**
* @file mainwindow.cpp
* @author skupina 3++
* @brief  Implementace mainwindow.h.
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Operations.h"
#include "Mathf.h"
#include "GUI.h"

int maxLength=9;

GUI gui;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" || ui->label->text() == "syntax error")
        ui->label->setText(ui->pushButton_1->text());
    else
        ui->label->setText(ui->label->text() + ui->pushButton_1->text());
    gui.clickNumber(ui->pushButton_1->text().toDouble());
}

void MainWindow::on_pushButton_2_clicked()
{
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" || ui->label->text() == "syntax error")
        ui->label->setText(ui->pushButton_2->text());
    else
        ui->label->setText(ui->label->text() + ui->pushButton_2->text());
    gui.clickNumber(ui->pushButton_2->text().toDouble());
}

void MainWindow::on_pushButton_3_clicked()
{
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" || ui->label->text() == "syntax error")
        ui->label->setText(ui->pushButton_3->text());
    else
        ui->label->setText(ui->label->text() + ui->pushButton_3->text());
    gui.clickNumber(ui->pushButton_3->text().toDouble());
}

void MainWindow::on_pushButton_4_clicked()
{
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" || ui->label->text() == "syntax error")
        ui->label->setText(ui->pushButton_4->text());
    else
        ui->label->setText(ui->label->text() + ui->pushButton_4->text());
    gui.clickNumber(ui->pushButton_4->text().toDouble());
}

void MainWindow::on_pushButton_5_clicked()
{
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" || ui->label->text() == "syntax error")
        ui->label->setText(ui->pushButton_5->text());
    else
        ui->label->setText(ui->label->text() + ui->pushButton_5->text());
    gui.clickNumber(ui->pushButton_5->text().toDouble());
}

void MainWindow::on_pushButton_6_clicked()
{
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" || ui->label->text() == "syntax error")
        ui->label->setText(ui->pushButton_6->text());
    else
        ui->label->setText(ui->label->text() + ui->pushButton_6->text());
    gui.clickNumber(ui->pushButton_6->text().toDouble());
}

void MainWindow::on_pushButton_7_clicked()
{
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" || ui->label->text() == "syntax error")
        ui->label->setText(ui->pushButton_7->text());
    else
        ui->label->setText(ui->label->text() + ui->pushButton_7->text());
    gui.clickNumber(ui->pushButton_7->text().toDouble());
}

void MainWindow::on_pushButton_8_clicked()
{
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" || ui->label->text() == "syntax error")
        ui->label->setText(ui->pushButton_8->text());
    else
        ui->label->setText(ui->label->text() + ui->pushButton_8->text());
    gui.clickNumber(ui->pushButton_8->text().toDouble());
}

void MainWindow::on_pushButton_9_clicked()
{
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" || ui->label->text() == "syntax error")
        ui->label->setText(ui->pushButton_9->text());
    else
        ui->label->setText(ui->label->text() + ui->pushButton_9->text());
    gui.clickNumber(ui->pushButton_9->text().toDouble());
}

void MainWindow::on_pushButton_0_clicked()
{
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" || ui->label->text() == "syntax error")
        ui->label->setText(ui->pushButton_0->text());
    else
        ui->label->setText(ui->label->text() + ui->pushButton_0->text());
    gui.clickNumber(ui->pushButton_0->text().toDouble());
}

void MainWindow::on_pushButton_20_clicked() // "C"
{
    ui->label->setText("0");
    //object.clear();
}

void MainWindow::on_pushButton_10_clicked() // "DEL"
{
    ui->label->setText("0");
    gui.clickClear();
}

void MainWindow::on_pushButton_13_clicked() // "!"
{
/*
    pom=ui->label->text();
   double x = pom.toDouble();
    if(x < 13)
    {
        object.setOperand1(x);
        object.setOperation("!");

       try {
            object.calculate();
            } catch(string &a){
            QString tex = QString::fromStdString(a);
            ui->label->text(tex);
            object.clear();
            return;
            }

        double y = object.calculate();
        vysledek = QString::number(y);
        ui->label->setText(vysledek);
        object.clear();
    }
    else  ui->label->setText("Overflow");
*/
    //TODO viac operácii za sebou
    if(gui.clickOperand((ui->pushButton_13->text()).toStdString())) //true ak je čo rátať
    {
        QString vysledek = QString::number(gui.clickEqual()); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek.toDouble());  //do 1 operandu nastaví výsledok
    }
    else
        ui->label->setText(ui->pushButton_13->text());//vypíše operátor
}


void MainWindow::on_pushButton_14_clicked() // "sqrt"
{
    //TODO viac operácii za sebou
    if(gui.clickOperand((ui->pushButton_14->text()).toStdString())) //true ak je čo rátať
    {
        QString vysledek = QString::number(gui.clickEqual()); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek.toDouble());  //do 1 operandu nastaví výsledok
    }
    else
        ui->label->setText(ui->pushButton_14->text());//vypíše operátor
}


void MainWindow::on_pushButton_15_clicked() // "**"
{
    //TODO viac operácii za sebou
    if(gui.clickOperand((ui->pushButton_15->text()).toStdString())) //true ak je čo rátať
    {
        QString vysledek = QString::number(gui.clickEqual()); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek.toDouble());  //do 1 operandu nastaví výsledok
        gui.clickOperand((ui->pushButton_15->text()).toStdString()); //nastaví novú operáciu
        ui->label->setText(ui->pushButton_15->text()); //vypíše operáciu
    }
    else
        ui->label->setText(ui->pushButton_15->text());//vypíše operátor
}

void MainWindow::on_pushButton_19_clicked() // "+"
{
    //TODO viac operácii za sebou
    if(gui.clickOperand((ui->pushButton_19->text()).toStdString())) //true ak je čo rátať
    {
        QString vysledek = QString::number(gui.clickEqual()); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek.toDouble());  //do 1 operandu nastaví výsledok
        gui.clickOperand((ui->pushButton_19->text()).toStdString()); //nastaví novú operáciu
        ui->label->setText(ui->pushButton_19->text()); //vypíše operáciu
    }
    else
        ui->label->setText(ui->pushButton_19->text());//vypíše operátor
}

void MainWindow::on_pushButton_18_clicked() // "-"
{
    //TODO viac operácii za sebou
    if(gui.clickOperand((ui->pushButton_18->text()).toStdString())) //true ak je čo rátať
    {
        QString vysledek = QString::number(gui.clickEqual()); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        ui->label->setText(vysledek);  //do 1 operandu nastaví výsledok
        gui.clickOperand((ui->pushButton_18->text()).toStdString()); //nastaví novú operáciu
        ui->label->setText(ui->pushButton_18->text()); //vypíše operáciu
    }
    else
        ui->label->setText(ui->pushButton_18->text());//vypíše operátor
}

void MainWindow::on_pushButton_12_clicked() // "="
{
    QString vysledek = QString::number(gui.clickEqual()); //vypočíta
    //ui->label->setText();
    ui->label->setText(vysledek);
}

void MainWindow::on_pushButton_17_clicked() // "*"
{
    //TODO viac operácii za sebou
    if(gui.clickOperand((ui->pushButton_17->text()).toStdString())) //true ak je čo rátať
    {
        QString vysledek = QString::number(gui.clickEqual()); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek.toDouble());  //do 1 operandu nastaví výsledok
        gui.clickOperand((ui->pushButton_17->text()).toStdString()); //nastaví novú operáciu
        ui->label->setText(ui->pushButton_17->text()); //vypíše operáciu
    }
    else
        ui->label->setText(ui->pushButton_17->text());//vypíše operátor
}

void MainWindow::on_pushButton_16_clicked() // "/"
{
    //TODO viac operácii za sebou
    if(gui.clickOperand((ui->pushButton_16->text()).toStdString())) //true ak je čo rátať
    {
        QString vysledek = QString::number(gui.clickEqual()); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek.toDouble());  //do 1 operandu nastaví výsledok
        gui.clickOperand((ui->pushButton_16->text()).toStdString()); //nastaví novú operáciu
        ui->label->setText(ui->pushButton_16->text()); //vypíše operáciu
    }
    else
        ui->label->setText(ui->pushButton_16->text());//vypíše operátor
}
/*** Konec souboru mainwindow.cpp ***/
