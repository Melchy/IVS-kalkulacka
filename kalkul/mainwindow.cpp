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
#include <QtDebug>
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

void MainWindow::on_pushButton_1_clicked()//1
{
    QString displayValue = ui->label->text();
    string a = gui.clickNumber("1",displayValue.toStdString());
    ui->label->setText(QString::fromStdString(a));
}

void MainWindow::on_pushButton_2_clicked()//2
{
    QString displayValue = ui->label->text();
    string a = gui.clickNumber("2",displayValue.toStdString());
    ui->label->setText(QString::fromStdString(a));
}

void MainWindow::on_pushButton_3_clicked()//3
{
    QString displayValue = ui->label->text();
    string a = gui.clickNumber("3",displayValue.toStdString());
    ui->label->setText(QString::fromStdString(a));
}

void MainWindow::on_pushButton_4_clicked()//4
{
    QString displayValue = ui->label->text();
    string a = gui.clickNumber("4",displayValue.toStdString());
    ui->label->setText(QString::fromStdString(a));
}

void MainWindow::on_pushButton_5_clicked()//5
{
    QString displayValue = ui->label->text();
    string a = gui.clickNumber("5",displayValue.toStdString());
    ui->label->setText(QString::fromStdString(a));
}

void MainWindow::on_pushButton_6_clicked()//6
{
    QString displayValue = ui->label->text();
    string a = gui.clickNumber("6",displayValue.toStdString());
    ui->label->setText(QString::fromStdString(a));
}

void MainWindow::on_pushButton_7_clicked()//7
{
    QString displayValue = ui->label->text();
    string a = gui.clickNumber("7",displayValue.toStdString());
    ui->label->setText(QString::fromStdString(a));
}

void MainWindow::on_pushButton_8_clicked()//8
{
    QString displayValue = ui->label->text();
    string a = gui.clickNumber("8",displayValue.toStdString());
    ui->label->setText(QString::fromStdString(a));
}

void MainWindow::on_pushButton_9_clicked()//9
{
    QString displayValue = ui->label->text();
    string a = gui.clickNumber("9",displayValue.toStdString());
    ui->label->setText(QString::fromStdString(a));
}

void MainWindow::on_pushButton_0_clicked()//0
{
    QString displayValue = ui->label->text();
    string a = gui.clickNumber("0",displayValue.toStdString());
    ui->label->setText(QString::fromStdString(a));
}

void MainWindow::on_pushButton_20_clicked() // "C"
{
    ui->label->setText(QString::fromStdString(gui.clickClear()));
    
}

void MainWindow::on_pushButton_10_clicked() // "DEL"
{
    ui->label->setText(QString::fromStdString(gui.clickBack(ui->label->text().toStdString())));
}

void MainWindow::on_pushButton_13_clicked() // "!"
{
    QString displayValue = ui->label->text();
    if(displayValue != "Overflow"){
        double foo = 0;
        try{
            foo = gui.clickOperand("!",displayValue.toStdString());
            ui->label->setText(QString::number(foo));
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));
        }
    }
    
}


void MainWindow::on_pushButton_14_clicked() // "sqrt"
{
    QString displayValue = ui->label->text();
    if(displayValue != "Overflow"){
        double foo = 0;
        try{
            foo = gui.clickOperand("sqrt",displayValue.toStdString());
            ui->label->setText(QString::number(foo));
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));
        }
    }
}


void MainWindow::on_pushButton_15_clicked() // "**"
{
    QString displayValue = ui->label->text();
    if(displayValue != "Overflow"){
        double foo = 0;
        try{
            foo = gui.clickOperand("**",displayValue.toStdString());
            ui->label->setText(QString::number(foo));
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));
        }
    }
}

void MainWindow::on_pushButton_19_clicked() // "+"
{
    QString displayValue = ui->label->text();
    if(displayValue != "Overflow"){
        double foo = 0;
        try{
            foo = gui.clickOperand("+",displayValue.toStdString());
            ui->label->setText(QString::number(foo));
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));
        }
    }
}

void MainWindow::on_pushButton_18_clicked() // "-"
{
    QString displayValue = ui->label->text();
    if(displayValue != "Overflow"){
        double foo = 0;
        try{
            foo = gui.clickOperand("-",displayValue.toStdString());
            ui->label->setText(QString::number(foo));
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));
        }
    }
}

void MainWindow::on_pushButton_12_clicked() // "="
{
    QString displayValue = ui->label->text();
    if(displayValue != "Overflow"){
        double foo = 0;
        try{
            foo = gui.clickOperand("=",displayValue.toStdString());
            ui->label->setText(QString::number(foo));
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));
        }
    }
}

void MainWindow::on_pushButton_17_clicked() // "*"
{
    QString displayValue = ui->label->text();
    if(displayValue != "Overflow"){
        double foo = 0;
        try{
            foo = gui.clickOperand("*",displayValue.toStdString());
            ui->label->setText(QString::number(foo));
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));
        }
    }
}

void MainWindow::on_pushButton_16_clicked() // "/"
{
    QString displayValue = ui->label->text();
    if(displayValue != "Overflow"){
        double foo = 0;
        try{
            foo = gui.clickOperand("/",displayValue.toStdString());
            ui->label->setText(QString::number(foo));
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));
        }
    }
}
/*** Konec souboru mainwindow.cpp ***/
