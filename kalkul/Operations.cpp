/*******************************************************************
 * Název projektu: Kalkulačka
 * Soubor: Operations.cpp
 * Datum: 24.4.2016
 * Autor: skupina 3++
 * Popis: Třída která komunikuje s matematickou knihovnou
 *******************************************************************/
/**
* @file Operations.cpp
* @author skupina 3++
* @brief  Implementace Operations.h.
*/
#include "Mathf.h"
#include "Operations.h"

/**
 * Nastaví první operand
 * @param Op1 double první operand
 */
void Operations::setOperand1(double Op1){
    operand1 = Op1;
}

/**
 * Nastaví druhý operand
 * @param Op2 double druhý operand
 */
void Operations::setOperand2(double Op2){//nastaví druhý operand
    operand2 = Op2;
}

/**
 * Nastaví operaci
 * @param Operation string operace
 */
void Operations::setOperation(string Operation){
	operation = Operation;
}

/**
 * Vrátí operaci
 * @return string operace
 */
string Operations::getOperation()
{
	return operation;
}

/**
 * Předává operandy a operace matematické knihovně, která vrátí výsledek
 * @return double vrátí výsledek vypočítaný pomocí matematické knihovny
 */
double Operations::calculate() {
	double result = 0;
    if(operation == "*"){
        result = Mathf::multipli(operand1,operand2);
	}
    else if(operation == "/"){
        result = Mathf::divide(operand1,operand2);
	}
    else if(operation == "!"){
        result = Mathf::factorial(operand1);
	}
    else if(operation  == "**"){
        result = Mathf::power(operand1,operand2);
	}
    else if (operation  == "+"){
        result = Mathf::add(operand1,operand2);
	}
    else if (operation == "-"){
        result = Mathf::subtract(operand1,operand2);
	}
    else if (operation == "sqrt"){
        result = Mathf::sqrt(operand1);
    } else if(operation == "=" || operation == ""){ 
    	result = operand1;
    }
	else
	{
		throw "syntax error";
		return 0;
	}
	return result;
}

/**
 * Vyčistí operandy a operace
 */
void Operations::clear() {
	operand1 = 0;
	operand2 = 0;
	operation = "";

}

/**
 * Vyhodnotí jestli je operace jednooperandová
 * @param Operation string znak operace
 * @return bool pokud je operace jedooperandová vrátí true jinak false
 */
bool Operations::inOneOperandOperation(string Operation){
    if(Operation == "!" || Operation == "sqrt" || Operation == "=")
		return true;
    else
		return false;
}

/*** Konec souboru Operations.cpp ***/
