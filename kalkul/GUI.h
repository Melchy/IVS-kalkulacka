/*******************************************************************
 * Název projektu: Kalkulačka
 * Soubor: GUI.h
 * Datum: 24.4.2016
 * Autor: skupina 3++
 * Popis: Třída která komunikuje s uživatelkým rozhraním a reaguje na stisknutí tlačítek
 *******************************************************************/
 /**
 * @file GUI.ch
 * @brief Třída GUI a její metody
 * @author skupina 3++
 */
#ifndef GUI_H
#define GUI_H
#include "Operations.h"
#include "Mathf.h"
#include "Qlabel.h"
#include <stdbool.h>
#include <string>

	using namespace std;
	class GUI
	{
    private:
    	Operations oper;
	public:
        double clickOperand(string,string);
        string clickNumber(string,string);
		string clickClear();
		string clickBack(string);
	};
#endif
/*** Konec souboru GUI.h ***/
