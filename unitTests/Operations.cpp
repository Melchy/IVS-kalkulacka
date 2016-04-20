#include "Operations.h"

double Operations::getOperand1(){
	return operand1;
}
double Operations::getOperand2(){
	return operand2;
}
string Operations::getOperation(){
	return operation;
}
void Operations::setOperand1(double Op1){
	operand1 = Op1;
}
void Operations::setOperand2(double Op2){
	operand2 = Op2;
}
void Operations::setOperands(double Op1,double Op2){
	setOperand1(Op1);
	setOperand2(Op2);
}
void Operations::setOperation(string Operation){
	operation = Operation;
}


double Operations::add() {
	return operand1 + operand2;
}

double Operations::substract() {
	return operand1 - operand2;
}

double Operations::multipli() {
	return operand1 * operand2;
}

double Operations::divide() {
	return operand1 / operand2;
}

double Operations::factorial() {
	double fact = 1;
	for(int i = 1; i <= operand1; i++)
	{
		fact = fact * i;
	}
	return fact;
}

double Operations::power2() {
	return operand1 * operand1;
}

double Operations::calculate() {
	
	switch(getOperation())
	{
		case "+":
			return add();
		case "-":
			return substract();
		case "*":
			return multiply();
		case "/":
			return divide();
		case "!":
			return factorial();
		case "**":
			return power2();
		default:
			return 0;
	}
	return 0;
}

void Operations::show(double value,Qlabel& label) {

}
void Operations::clear() {
	operand1 = 0;
	operand2 = 0;
	operation = ""; 
}
