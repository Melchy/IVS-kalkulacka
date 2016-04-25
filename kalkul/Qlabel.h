/*******************************************************************
 * Název projektu: Kalkulačka
 * Soubor: Qlabel.h
 * Datum: 24.4.2016
 * Autor: skupina 3++
 * Popis: Třída Qlabel
 *******************************************************************/
/**
* @file Qlabel.h
* @author skupina 3++
* @brief Třída Qlabel
*/
#ifndef QLABEL_H
#define QLABEL_H
	#include <string>
	class Qlabel
	{
	public:
		std::string text();
		void text(const std::string& text);
	private:
		std::string value;
	};
#endif
/*** Konec souboru Qlabel.h ***/
