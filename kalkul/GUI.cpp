#include "GUI.h"
#include <QtDebug>

double GUI::clickOperand(string operation,string display)
{

	if(oper.getOperation() != ""){
		oper.setOperand2(stod(display));
		display = to_string(oper.calculate());
		oper.clear();
	}
	if(oper.inOneOperandOperation(operation)){//jednooperandove jsou !,sqrt,=
		oper.setOperand1(stod(display));
		oper.setOperation(operation);
		double foo = oper.calculate();
		qDebug() << QString::number(foo);
		oper.clear();
		return foo;
	}else{
		oper.setOperand1(stod(display));
		oper.setOperation(operation);
		oper.setOperand2(0);
		return 0;
	}
}

string GUI::clickNumber(string number, string display)
{
	if(display == "Overflow"){
		oper.clear();
		return number;
	}
	if(display.length() >= 9){
		return display;
	}
	if(display == "0"){
		return number;
	}
	return (display+number);
}

string GUI::clickClear()
{
	oper.clear();
	return "0";	
}

string GUI::clickBack(string displayValue)
{
    if(displayValue == "Overflow"){
		oper.clear();
		return "0";
	}
	if(displayValue.length() == 1){
		return "0";
	}
    displayValue.pop_back();
    return displayValue;
}
