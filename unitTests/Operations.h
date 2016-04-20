
#ifndef OPERATIONS_H
#define OPERATIONS_H
    #include "Qlabel.h"
	using namespace std;
	class Operations
	{
	public:
		void setOperand1(long);
		void setOperand2(long);
		void setOperation(string);
		double calculate();
		void clear();
		bool inOneOperandOperation(string);
	private:
		double operand1 = 0;
		double operand2 = 0;
		string operation="";
		string oneOperandOperations[10] = {""};
	};
#endif
