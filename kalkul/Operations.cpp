/**
* @file Operations.cpp
* @author skupina 3++
* @brief  Implementace Operations.h.
*/
#include "Mathf.h"
#include "Operations.h"

/*
Operations::Operations()
{
	operand1 = 0;
	operand2 = 0;
	operation = "";
	oneOperandOperations = {"!", "sqrt"};
}
*/
void Operations::setOperand1(double Op1){
    operand1 = Op1;
}
void Operations::setOperand2(double Op2){
    operand2 = Op2;
}
void Operations::setOperation(string Operation){
	operation = Operation;
}
string  Operations::getOperation()
{
	return operation;
}


double Operations::calculate() {
    if(operation == "*"){
        return Mathf::multipli(operand1,operand2);
	}
    else if(operation == "/"){
        return Mathf::divide(operand1,operand2);
	}
    else if(operation == "!"){
        return Mathf::factorial(operand1);
	}
    else if(operation  == "^"){
        return Mathf::power(operand1,operand2);
	}
    else if (operation  == "+"){
        return Mathf::add(operand1,operand2);
	}
    else if (operation == "-"){
        return Mathf::subtract(operand1,operand2);
	}
    else if (operation == "sqrt"){
        return operand1 * Mathf::sqrt(operand2);
    }
	else
	{
		throw "syntax error";
		return 0;
	}
}

void Operations::clear() {
	operand1 = 0;
	operand2 = 0;
	operation = "";

}

bool Operations::inOneOperandOperation(string Operation){
    if(Operation == "!")
		return true;
    else if(Operation == "sqrt")
		return true;
	else 
		return false;
}

/*** Konec souboru Operations.cpp ***/
