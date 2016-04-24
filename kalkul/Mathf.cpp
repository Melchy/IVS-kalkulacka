/*******************************************************************
 * Název projektu: Kalkulačka
 * Soubor: Mathf.cpp
 * Datum: 24.4.2016
 * Autor: skupina 3++
 * Popis: Matematická knihovna
 *******************************************************************/
/**
* @file Mathf.cpp
* @author skupina 3++
* @brief  Implementace Mathf.h.
*/
#include "Mathf.h"

/**
 *  Sčítání
 * @param op1 první operand
 * @param op2 druhý operand
 * @return double výsledek sčítání
 */
double Mathf::add(double op1, double op2){
	if((op1 + op2) > 999999999)//pokud výsledek přeteče obrazovku 
		throw std::string("Overflow");//vrátí chybovou hlášku
	else
		return op1 + op2; //vrátí součet operandů
}

/**
 *  Rozdíl
 * @param op1 první operand
 * @param op2 druhý operand
 * @return double výsledek odečítání
 */
double Mathf::subtract(double op1, double op2){
	if((op1-op2) < -99999999)//pokud výsledek přeteče obrazovku 
		throw std::string("Overflow");//vrátí chybovou hlášku
	else
		return op1-op2;//vrátí rozdíl operandů
}

/**
 *  Násobení
 * @param op1 první operand
 * @param op2 druhý operand
 * @return double výsledek násobení
 */
double Mathf::multipli(double op1, double op2){
	if(((op1*op2) > 999999999) || ((op1*op2) < -99999999))//pokud výsledek přeteče obrazovku 
		throw std::string("Overflow");//vrátí chybovou hlášku
	else return op1*op2; //vrátí součin operanů
}

/**
 *  Dělení
 * @param op1 první operand
 * @param op2 druhý operand
 * @return double výsledek dělení
 */
double Mathf::divide(double op1, double op2){
	if((op2 == 0) || ((op1 / op2) > 999999999) || ((op1 / op2) < -99999999))//pokud výsledek přeteče obrazovku 
		throw std::string("Overflow");//vrátí chybovou hlášku
	else return op1 / op2;//vrátí podíl operanů
}

/**
 *  Faktoriál
 * @param op1 operand
 * @return double výsledek faktoriálu
 */
double Mathf::factorial(double op1){
	if((op1 > 12) || (op1 < 0))//pokud výsledek přeteče obrazovku 
		throw std::string("Overflow");//vrátí chybovou hlášku
	else
	{
		long c = op1; //counter
		long fact = 1; //factorial
		for(long i = 1; i <= c; i++)
			fact *= i;
		return fact;
	}
}

/**
 *  Umocňování
 * @param op1 první operand - mocněnec
 * @param op2 druhý operand - mocnitel
 * @return double výsledek umocňování
 */
double Mathf::power(double op1, double op2){
	double power = op1;
	for(unsigned int i = 0; i < op2-1; i++)//násobí tolikrát kolik je exponent
		power *= op1; 
	if(power > 999999999)//pokud výsledek přeteče obrazovku 
		throw std::string("Overflow");//vrátí chybovou hlášku
	else return power;//vrátí mocninu
}

/**
 *  Odmocnina
 * @param op1 operand
 * @return double výsledek odmocniny
 */
double Mathf::sqrt(double op1){
	if(op1 < 1) //pokud je operand menší než jedna
		throw std::string("Overflow");//vrátí chybovou hlášku
	return ::sqrt(op1);
}
/*** Konec souboru Mathf.cpp ***/
