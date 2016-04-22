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
	else
		return true;
}

void GUI::clickNumber(string number)
{
	if(oper.getOperation() == "")
		oper.setOperand1(stod(number));
	else
		oper.setOperand2(stod(number));
}

void GUI::clickClear()
{
	oper.clear();	
}

void GUI::clickBack()
{

}

string GUI::clickEqual()
{
	return to_string(oper.calculate());
}
