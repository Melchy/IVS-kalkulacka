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
    ui->label->setText(ui->label->text() + (ui->pushButton_1->text()));
    gui.clickNumber(ui->pushButton_1->text().toStdString());
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText(ui->label->text() + (ui->pushButton_2->text()));
    gui.clickNumber(ui->pushButton_2->text().toStdString());
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label->setText(ui->label->text() + (ui->pushButton_3->text()));
    gui.clickNumber(ui->pushButton_3->text().toStdString());
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->label->setText(ui->label->text() + (ui->pushButton_4->text()));
    gui.clickNumber(ui->pushButton_4->text().toStdString());
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->label->setText(ui->label->text() + (ui->pushButton_5->text()));
    gui.clickNumber(ui->pushButton_5->text().toStdString());
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->label->setText(ui->label->text() + (ui->pushButton_6->text()));
    gui.clickNumber(ui->pushButton_6->text().toStdString());
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->label->setText(ui->label->text() + (ui->pushButton_7->text()));
    gui.clickNumber(ui->pushButton_7->text().toStdString());
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->label->setText(ui->label->text() + (ui->pushButton_8->text()));
    gui.clickNumber(ui->pushButton_8->text().toStdString());
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->label->setText(ui->label->text() + (ui->pushButton_9->text()));
    gui.clickNumber(ui->pushButton_9->text().toStdString());
}

void MainWindow::on_pushButton_0_clicked()
{
    ui->label->setText(ui->label->text() + (ui->pushButton_0->text()));
    gui.clickNumber(ui->pushButton_0->text().toStdString());
}

void MainWindow::on_pushButton_20_clicked() // "C"
{
    ui->label->setText(ui->label->text().remove(ui->label->text().size()-1,1));
    gui.clickClear();
}

void MainWindow::on_pushButton_10_clicked() // "DEL"
{
    ui->label->setText("0");
    gui.clickClear();
}

void MainWindow::on_pushButton_13_clicked() // "!"
{
    QString vysledek = QString::number(gui.clickOperand(ui->pushButton_13->text().toStdString()));
    ui->label->setText(vysledek);
}


void MainWindow::on_pushButton_14_clicked() // "sqrt"
{
    QString vysledek = QString::number(gui.clickOperand("sqrt"));
    ui->label->setText(vysledek + "*" + ui->pushButton_14->text());
}


void MainWindow::on_pushButton_15_clicked() // "**"
{
    QString vysledek = QString::number(gui.clickOperand(ui->pushButton_15->text().toStdString()));
    ui->label->setText(vysledek + ui->pushButton_15->text());
}

void MainWindow::on_pushButton_19_clicked() // "+"
{
    QString vysledek = QString::number(gui.clickOperand(ui->pushButton_19->text().toStdString()));
    ui->label->setText(vysledek + ui->pushButton_19->text());
}

void MainWindow::on_pushButton_18_clicked() // "-"
{
    QString vysledek = QString::number(gui.clickOperand(ui->pushButton_18->text().toStdString()));
    ui->label->setText(vysledek + ui->pushButton_18->text());
}

void MainWindow::on_pushButton_12_clicked() // "="
{
    QString vysledek = QString::number(gui.clickEqual()); //vypočíta
    ui->label->setText(vysledek);
}

void MainWindow::on_pushButton_17_clicked() // "*"
{
    QString vysledek = QString::number(gui.clickOperand(ui->pushButton_17->text().toStdString()));
    ui->label->setText(vysledek + ui->pushButton_17->text());
}

void MainWindow::on_pushButton_16_clicked() // "/"
{
    QString vysledek = QString::number(gui.clickOperand(ui->pushButton_16->text().toStdString()));
    ui->label->setText(vysledek + ui->pushButton_16->text());
}
/*** Konec souboru mainwindow.cpp ***/
