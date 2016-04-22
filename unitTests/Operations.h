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
		static void setOperand1(double);
		static void setOperand2(double);
		static void setOperation(string);
		static vstring getOperation();
		static double calculate();
		static void clear();
		static bool inOneOperandOperation(string);
	private:
		double operand1 = 0;
		double operand2 = 0;
		string operation= "";
		string oneOperandOperations[10] = {"!", "sqrt"};
	};
#endif
