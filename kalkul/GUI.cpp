/*******************************************************************
* Název projektu: Kalkulačka
* Soubor: GUI.cpp
* Datum: 24.4.2016
* Autor: skupina 3++
* Popis: Třída která komunikuje s uživatelkým rozhraním a reaguje na stisknutí tlačítek
*******************************************************************/
/**
* @file GUI.cpp
* @brief Třída GUI a její metody
* @author skupina 3++
*/
#include "GUI.h"
#include <QtDebug>

/**
 * Řeší situaci kdy uživatel klikl na tlačítko s operací
 * @param operation stisknutá operace - string 
 * @param display obsah obrazovky - string
 * @return double vypočtená hodnota
 */
double GUI::clickOperand(string operation,string display)
{

	if(oper.getOperation() != ""){//pokud není prázdná operace a je dvouoperandová
		oper.setOperand2(stod(display));//nastaví druhý operand na hodnotu uvedenou na obrazovce
		display = to_string(oper.calculate());//vypočítá výraz a vrátí obrazovce hodnotu, nebo chybu
		oper.clear();//vyčistí operaci a operandy
	}
	if(oper.inOneOperandOperation(operation)){//pokud jsou nastaveny jednooperandové operace !, sqrt, =
		oper.setOperand1(stod(display));//nastaví první operand podle obrazovky
		oper.setOperation(operation);//nastaví operaci
		double foo = oper.calculate(); //vypočítá výraz
		qDebug() << QString::number(foo);//pokud byla chyba tak vytiskne na obrazovku hlášku
		oper.clear();//vyčistí operaci a operandy
		return foo;//vrátí vypočtenou hodnotu
	}else{
		oper.setOperand1(stod(display));//nastaví první operand podle obrazovky
		oper.setOperation(operation);//nastaví operaci
		oper.setOperand2(0);//nastaví druhý operand na nulu
		return 0;
	}
}
/**
 * Řeší situaci kdy uživatel klikl na tlačítko s číslem
 * @param number číslo bylo zadáno uživatelem zmáčknutím tlačítka - string 
 * @param display obsah obrazovky - string
 * @return string přidá na obrazovku znak čísla nebo nechá na obrazovce původni hodnotu pokud dosáhla limit
 */
string GUI::clickNumber(string number, string display)
{
	if(display == "Overflow"){//pokud je na obrazovce chybová hláška
		oper.clear();//vyčistí operandy a operace 
		return number;//nastaví číslo
	}
	if(display.length() >= 9){//pokud nastavované číslo dosáhne maximálního počtu znaků 
		return display;//tak se nabudou přidávat další znaky
	}
	if(display == "0"){//pokud je na obrazovce 0
		return number;// tak ji přepíče číslem
	}
	return (display+number);//jinak přidává čísla na obrazovku
}

/**
 * Vyčistí operandy a operaci a vrati 0 (uživatel stiskl tlačítko "C")
 * @return string vrátí nulu
 */
string GUI::clickClear()
{
	oper.clear();//vyčistí operandy a operaci
	return "0";//vrati na obrayovku 0
}

/**
 * Umaže posledni znak na obrazovce (uživatel stiskl tlačítko "DEL")
 * @param displayValue hodnota, která je na obrazovce - string
 * @return string řetězec s umazaným posledním znakem
 */
string GUI::clickBack(string displayValue)
{
    if(displayValue == "Overflow"){//pokud je na obrazovce chybová hláška
		oper.clear();//vyčití operandy a operaci
		return "0";//vrati 0 na obrazovku
	}
	if(displayValue.length() == 1){//pokud je na obrazovce jeden znak
		return "0"; //vrati 0 na obrazovku
	}
    displayValue.pop_back();//umaže podlení znak
    return displayValue;//vratí na obrazovku řetězec bez jenoho znaku
}
/*** Konec souboru GUI.cpp  ***/
