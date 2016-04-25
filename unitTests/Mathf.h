/*******************************************************************
 * Název projektu: Kalkulačka
 * Soubor: Mathf.h
 * Datum: 24.4.2016
 * Autor: skupina 3++
 * Popis: Matematická knihovna
 *******************************************************************/
/**
* @file Mathf.h
* @author skupina 3++
* @brief  Knihovna pro matematické operace.
*/
#ifndef MATHF_H
#define MATHF_H
#include <math.h>
#include<string>
	class Mathf
	{
	public:
		static double add(double,double);
        static double subtract(double,double);
		static double multipli(double,double);
		static double divide(double,double);
		static double factorial(double);
		static double power(double,double);
		static double sqrt(double);
	};
#endif
/*** Konec souboru Mathf.h ***/