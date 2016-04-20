#include "Operations.h"

void Operations::setOperand1(double Op1){
	operand1 = Op1;
}
void Operations::setOperand2(double Op2){
	operand2= Op2;
}
void Operations::setOperation(string operation){
	operation = operation;
}
double Operations::calculate() {
	return 0;
}
void Operations::clear() {
	operand1 = 0;
	operand2 = 0;
	operation = "";

}
bool inOneOperandOperation(string operation){
	if(operation == "!")
		return true;
	else if(operation == "sqrt")
		return true;
	else 
		return false;
}
