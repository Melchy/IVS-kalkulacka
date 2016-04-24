/**
* @file Operations.h
* @author skupina 3++
* @brief  Knihovna pro operace s frameworkem Qt.
*/
#ifndef OPERATIONS_H
#define OPERATIONS_H
#include "Qlabel.h"
#include "Mathf.h"
#include <stdbool.h>

	using namespace std;
	class Operations
	{
	public:
//		Operations();
        void setOperand1(double);
        void setOperand2(double);
        void setOperation(string);
        string getOperation();
        double calculate();
        void clear();
        bool inOneOperandOperation(string); //zbytočná funkcia
	private:
		double operand1 = 0;
		double operand2 = 0;
		string operation= "";
        string oneOperandOperations[10] = {"!", "sqrt"}; //zbytočný string
	};
#endif
/*** Konec souboru Operations.h ***/

