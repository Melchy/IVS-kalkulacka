#include "GUI.h"

using namespace std;

#define MAX_LENGHT 9
Operations oper;
bool GUI::clickOperand(string Operation)
{
    if(oper.getOperation() == "")
	{
		oper.setOperation(Operation);
		return false;
	}
    else if(oper.inOneOperandOperation(Operation))
        oper.setOperation(Operation);
    return true;
}

void GUI::clickNumber(double number)
{
	if(oper.getOperation() == "")
        oper.setOperand1(number);
	else
        oper.setOperand2(number);
}

void GUI::clickClear()
{
	oper.clear();	
}

void GUI::clickBack()
{

}

double GUI::clickEqual()
{
    double vysledek  = oper.calculate();
    oper.clear();
    oper.setOperand1(vysledek);
    return vysledek;
}
