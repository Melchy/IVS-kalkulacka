/**
* @file main.cpp
* @author skupina 3++
* @brief  Hlavny soubor.
*/
#include "mainwindow.h"
#include "Operations.h"
#include "Mathf.h"
#include <QApplication>
#include <QLabel>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
/*** Konec souboru main.cpp ***/
