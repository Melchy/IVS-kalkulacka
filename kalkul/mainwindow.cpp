/**
* @file mainwindow.cpp
* @author skupina 3++
* @brief  Implementace mainwindow.h.
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Operations.h"
#include "Mathf.h"
#include <string>
#include <stdlib.h>
#include "GUI.h"

int maxLength=9;

Operations object;
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

Button(int number)
{
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" || ui->label->text() == "syntax error")
    {
        ui->label->setText(ui->pushButton_number->text());
        gui.clickNumber(ui->label->text());
    }
    else
    {
        ui->label->setText(ui->label->text() + ui->pushButton_number->text());
        gui.clickNumber(ui->label->text() + ui->pushButton_number->text());
    }
}

void MainWindow::on_pushButton_1_clicked()
{
    Button(1);
}

void MainWindow::on_pushButton_2_clicked()
{
 Button(2);
}

void MainWindow::on_pushButton_3_clicked()
{
 Button(3);
}

void MainWindow::on_pushButton_4_clicked()
{
 Button(4);
}

void MainWindow::on_pushButton_5_clicked()
{
 Button(5);
}

void MainWindow::on_pushButton_6_clicked()
{
 Button(6);
}

void MainWindow::on_pushButton_7_clicked()
{
 Button(7);
}

void MainWindow::on_pushButton_8_clicked()
{
 Button(8);
}

void MainWindow::on_pushButton_9_clicked()
{
 Button(9);
}

void MainWindow::on_pushButton_0_clicked()
{
 Button(0);
}

void MainWindow::on_pushButton_20_clicked() // "C"
{
    //QString vysledek;
    Qstring vysledek = "0";
    ui->label->setText(vysledek);
    object.clear();
}

void MainWindow::on_pushButton_10_clicked() // "DEL"
{
    ui->label->setText();
    gui.clickClear;
}

void MainWindow::on_pushButton_13_clicked() // "!"
{
    pom=ui->label->text();
   double x = pom.toDouble();
    if(x < 13)
    {
        object.setOperand1(x);
        object.setOperation("!");

       /* try {
            object.calculate();
            } catch(string &a){
            QString tex = QString::fromStdString(a);
            ui->label->text(tex);
            object.clear();
            return;
            }
*/
        double y = object.calculate();
        vysledek = QString::number(y);
        ui->label->setText(vysledek);
        object.clear();
    }
    else  ui->label->setText("Overflow");
}


void MainWindow::on_pushButton_14_clicked() // "sqrt"
{
    //TODO viac operácii za sebou
    if(gui.clickOperand(ui->pushButton_14->text())) //true ak je čo rátať
    {
        Qstring vysledek = gui.clickEqual(); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek);  //do 1 operandu nastaví výsledok
    }
    else
        ui->label->setText(ui->pushButton_14->text());//vypíše operátor

}


void MainWindow::on_pushButton_15_clicked() // "**"
{
    if(gui.clickOperand(ui->pushButton_14->text())) //true ak je čo rátať
    {
        Qstring vysledek = gui.clickEqual(); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek);  //do 1 operandu nastaví výsledok
    }
    else
        ui->label->setText(ui->pushButton_14->text());//vypíše operátor

}

void MainWindow::on_pushButton_19_clicked() // "+"
{
    if(gui.clickOperand(ui->pushButton_14->text())) //true ak je čo rátať
    {
        Qstring vysledek = gui.clickEqual(); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek);  //do 1 operandu nastaví výsledok
    }
    else
        ui->label->setText(ui->pushButton_14->text());//vypíše operátor
}

void MainWindow::on_pushButton_18_clicked() // "-"
{
    if(gui.clickOperand(ui->pushButton_14->text())) //true ak je čo rátať
    {
        Qstring vysledek = gui.clickEqual(); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek);  //do 1 operandu nastaví výsledok
    }
    else
        ui->label->setText(ui->pushButton_14->text());//vypíše operátor
}

void MainWindow::on_pushButton_12_clicked() // "="
{
    if(gui.clickOperand(ui->pushButton_14->text())) //true ak je čo rátať
    {
        Qstring vysledek = gui.clickEqual(); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek);  //do 1 operandu nastaví výsledok
    }
    else
        ui->label->setText(ui->pushButton_14->text());//vypíše operátor
}

void MainWindow::on_pushButton_17_clicked() // "*"
{
    if(gui.clickOperand(ui->pushButton_14->text())) //true ak je čo rátať
    {
        Qstring vysledek = gui.clickEqual(); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek);  //do 1 operandu nastaví výsledok
    }
    else
        ui->label->setText(ui->pushButton_14->text());//vypíše operátor
}

void MainWindow::on_pushButton_16_clicked() // "/"
{
    if(gui.clickOperand(ui->pushButton_14->text())) //true ak je čo rátať
    {
        Qstring vysledek = gui.clickEqual(); //vypočíta
        ui->label->setText(vysledek);   //nastaví displej na hodnotu
        gui.clickClear();   //vyčistí operandy a operátory
        gui.clickNumber(vysledek);  //do 1 operandu nastaví výsledok
    }
    else
        ui->label->setText(ui->pushButton_14->text());//vypíše operátor
}
