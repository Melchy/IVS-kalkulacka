/*******************************************************************
 * Název projektu: Kalkulačka
 * Soubor: Qlabel.cpp
 * Datum: 24.4.2016
 * Autor: skupina 3++
 * Popis: Třída Qlabel
 *******************************************************************/
/**
* @file Qlabel.cpp
* @author skupina 3++
* @brief Třída Qlabel
*/
#include "Qlabel.h"
using namespace std;
string Qlabel::text() {
	return value;
}
void Qlabel::text(const string& text) {
	value = text;
}
/*** Konec souboru Qlabel.cpp ***/
