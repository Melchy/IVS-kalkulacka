/*******************************************************************
 * Název projektu: Kalkulačka
 * Soubor: mainwindow.cpp
 * Datum: 24.4.2016
 * Autor: skupina 3++
 * Popis: Třída která komunikuje s uživatelským rozhrním
 *******************************************************************/
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

/**
 * Kliknutí na tlačítko 1
 */
void MainWindow::on_pushButton_1_clicked()//1
{
    QString displayValue = ui->label->text();//vezme hodnotu obrazovky
    string a = gui.clickNumber("1",displayValue.toStdString());//vyhodnotí jestli přidá znak
    ui->label->setText(QString::fromStdString(a));//přidá znak 1, pokud je naplněn limit obrazovky nic nepřidá
}

/**
 * Kliknutí na tlačítko 2
 */
void MainWindow::on_pushButton_2_clicked()//2
{
    QString displayValue = ui->label->text();//vezme hodnotu obrazovky
    string a = gui.clickNumber("2",displayValue.toStdString());//vyhodnotí jestli přidá znak
    ui->label->setText(QString::fromStdString(a));//přidá znak 2, pokud je naplněn limit obrazovky nic nepřidá
}

/**
 * Kliknutí na tlačítko 3
 */
void MainWindow::on_pushButton_3_clicked()//3
{
    QString displayValue = ui->label->text();//vezme hodnotu obrazovky
    string a = gui.clickNumber("3",displayValue.toStdString());//vyhodnotí jestli přidá znak
    ui->label->setText(QString::fromStdString(a));//přidá znak 3, pokud je naplněn limit obrazovky nic nepřidá
}

/**
 * Kliknutí na tlačítko 4
 */
void MainWindow::on_pushButton_4_clicked()//4
{
    QString displayValue = ui->label->text();//vezme hodnotu obrazovky
    string a = gui.clickNumber("4",displayValue.toStdString());//vyhodnotí jestli přidá znak
    ui->label->setText(QString::fromStdString(a));//přidá znak 4, pokud je naplněn limit obrazovky nic nepřidá
}

/**
 * Kliknutí na tlačítko 5
 */
void MainWindow::on_pushButton_5_clicked()//5
{
    QString displayValue = ui->label->text();//vezme hodnotu obrazovky
    string a = gui.clickNumber("5",displayValue.toStdString());//vyhodnotí jestli přidá znak
    ui->label->setText(QString::fromStdString(a));//přidá znak 5, pokud je naplněn limit obrazovky nic nepřidá
}

/**
 * Kliknutí na tlačítko 6
 */
void MainWindow::on_pushButton_6_clicked()//6
{
    QString displayValue = ui->label->text();//vezme hodnotu obrazovky
    string a = gui.clickNumber("6",displayValue.toStdString());//vyhodnotí jestli přidá znak
    ui->label->setText(QString::fromStdString(a));//přidá znak 6, pokud je naplněn limit obrazovky nic nepřidá
}

/**
 * Kliknutí na tlačítko 7
 */
void MainWindow::on_pushButton_7_clicked()//7
{
    QString displayValue = ui->label->text();//vezme hodnotu obrazovky
    string a = gui.clickNumber("7",displayValue.toStdString());//vyhodnotí jestli přidá znak
    ui->label->setText(QString::fromStdString(a));//přidá znak 7, pokud je naplněn limit obrazovky nic nepřidá
}

/**
 * Kliknutí na tlačítko 8
 */
void MainWindow::on_pushButton_8_clicked()//8
{
    QString displayValue = ui->label->text();//vezme hodnotu obrazovky
    string a = gui.clickNumber("8",displayValue.toStdString());//vyhodnotí jestli přidá znak
    ui->label->setText(QString::fromStdString(a));//přidá znak 8, pokud je naplněn limit obrazovky nic nepřidá
}

/**
 * Kliknutí na tlačítko 9
 */
void MainWindow::on_pushButton_9_clicked()//9
{
    QString displayValue = ui->label->text();//vezme hodnotu obrazovky
    string a = gui.clickNumber("9",displayValue.toStdString());//vyhodnotí jestli přidá znak
    ui->label->setText(QString::fromStdString(a));//přidá znak 9, pokud je naplněn limit obrazovky nic nepřidá
}

/**
 * Kliknutí na tlačítko 0
 */
void MainWindow::on_pushButton_0_clicked()//0
{
    QString displayValue = ui->label->text();//vezme hodnotu obrazovky
    string a = gui.clickNumber("0",displayValue.toStdString());//vyhodnotí jestli přidá znak
    ui->label->setText(QString::fromStdString(a));//přidá znak 0, pokud je jen znak 0 nebo je naplněn limit obrazovky nic nepřidá
}

/**
 * Kliknutí na tlačítko C
 */
void MainWindow::on_pushButton_20_clicked() // "C"
{
    ui->label->setText(QString::fromStdString(gui.clickClear()));//vyčistí obrazovku a nastaví na 0
    
}

/**
 * Kliknutí na tlačítko DEL
 */
void MainWindow::on_pushButton_10_clicked() // "DEL"
{
    ui->label->setText(QString::fromStdString(gui.clickBack(ui->label->text().toStdString())));//umaže poslední znak pokud může
}

/**
 * Kliknutí na tlačítko !
 */
void MainWindow::on_pushButton_13_clicked() // "!"
{
    QString displayValue = ui->label->text();//vezme hodnotu z obrazovky
    if(displayValue != "Overflow"){//pokud není chybová hláška 
        double foo = 0; 
        try{
            foo = gui.clickOperand("!",displayValue.toStdString());//nastaví operand na !
            ui->label->setText(QString::number(foo));//vytiskne výsledek
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));//vyhodí chybovou hlášku
        }
    }
    
}

/**
 * Kliknutí na tlačítko sqrt
 */
void MainWindow::on_pushButton_14_clicked() // "sqrt"
{
    QString displayValue = ui->label->text();//vezme hodnotu z obrazovky
    if(displayValue != "Overflow"){//pokud není chybová hláška 
        double foo = 0;
        try{
            foo = gui.clickOperand("sqrt",displayValue.toStdString());//nastaví operand na sqrt
            ui->label->setText(QString::number(foo));//vytiskne výsledek
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));//vyhodí chybovou hlášku
        }
    }
}

/**
 * Kliknutí na tlačítko ^
 */
void MainWindow::on_pushButton_15_clicked() // "**"
{
    QString displayValue = ui->label->text();//vezme hodnotu z obrazovky
    if(displayValue != "Overflow"){//pokud není chybová hláška 
        double foo = 0;
        try{
            foo = gui.clickOperand("**",displayValue.toStdString());//nastaví operand na **
            ui->label->setText(QString::number(foo));//vytiskne výsledek
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));//vyhodí chybovou hlášku
        }
    }
}

/**
 * Kliknutí na tlačítko +
 */
void MainWindow::on_pushButton_19_clicked() // "+"
{
    QString displayValue = ui->label->text();//vezme hodnotu z obrazovky
    if(displayValue != "Overflow"){//pokud není chybová hláška
        double foo = 0;
        try{
            foo = gui.clickOperand("+",displayValue.toStdString());//nastaví operand na +
            ui->label->setText(QString::number(foo));//vytiskne výsledek
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));//vyhodí chybovou hlášku
        }
    }
}

/**
 * Kliknutí na tlačítko -
 */
void MainWindow::on_pushButton_18_clicked() // "-"
{
    QString displayValue = ui->label->text();//vezme hodnotu z obrazovky
    if(displayValue != "Overflow"){//pokud není chybová hláška
        double foo = 0;
        try{
            foo = gui.clickOperand("-",displayValue.toStdString());//nastaví operand na -
            ui->label->setText(QString::number(foo));//vytiskne výsledek
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));//vyhodí chybovou hlášku
        }
    }
}

/**
 * Kliknutí na tlačítko =
 */
void MainWindow::on_pushButton_12_clicked() // "="
{
    QString displayValue = ui->label->text();//vezme hodnotu z obrazovky
    if(displayValue != "Overflow"){//pokud není chybová hláška
        double foo = 0;
        try{
            foo = gui.clickOperand("=",displayValue.toStdString());//nastaví operand na =
            ui->label->setText(QString::number(foo));//vytiskne výsledek
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));//vyhodí chybovou hlášku
        }
    }
}

/**
 * Kliknutí na tlačítko *
 */
void MainWindow::on_pushButton_17_clicked() // "*"
{
    QString displayValue = ui->label->text();//vezme hodnotu z obrazovky
    if(displayValue != "Overflow"){//pokud není chybová hláška
        double foo = 0;
        try{
            foo = gui.clickOperand("*",displayValue.toStdString());//nastaví operand na *
            ui->label->setText(QString::number(foo));//vytiskne výsledek
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));//vyhodí chybovou hlášku
        }
    }
}

/**
 * Kliknutí na tlačítko /
 */
void MainWindow::on_pushButton_16_clicked() // "/"
{
    QString displayValue = ui->label->text();//vezme hodnotu z obrazovky
    if(displayValue != "Overflow"){//pokud není chybová hláška
        double foo = 0;
        try{
            foo = gui.clickOperand("/",displayValue.toStdString());//nastaví operand na /
            ui->label->setText(QString::number(foo));//vytiskne výsledek
        }catch(string e){
            ui->label->setText(QString::fromStdString(e));//vyhodí chybovou hlášku
        }
    }
}
/*** Konec souboru mainwindow.cpp ***/
