/*******************************************************************
 * Název projektu: Kalkulačka
 * Soubor: main.cpp
 * Datum: 24.4.2016
 * Autor: skupina 3++
 * Popis: Třída která vytvoří aplikaci
 *******************************************************************/
/**
* @file main.cpp
* @author skupina 3++
* @brief  Hlavní soubor vygenerován Qt Creator
*/
#include "mainwindow.h"
#include "Operations.h"
#include "Mathf.h"
#include <QApplication>
#include <QLabel>

/**
 * Vytvoření aplikace, hlavního okna a zobrazení
 * @param argc počet argumentů
 * @param argv argumenty(nazev programu)
 * @return výstup aplikace
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //vytvoření aplikace
    MainWindow w; //vytvoření hlavního okna
    w.show(); //zobrazení hlavního okna na obrazovku

    return a.exec();//spuštění aplikace
}
/*** Konec souboru main.cpp ***/
