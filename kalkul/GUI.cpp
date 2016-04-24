#include "GUI.h"

Operations oper;

double GUI::clickOperand(string Operation)
{
    double vysledek;
    if(Operation == "!")
    {
        oper.setOperand1(std::stod(display));
        oper.setOperation(Operation);
        vysledek = clickEqual();
        display = to_string(vysledek);
    }
    else if(Operation == "sqrt")
    {
        if(display == "0")
            display = "1";
        oper.setOperand1(std::stod(display));
        oper.setOperation(Operation);
        vysledek = std::stod(display);
        display = "";
    }
    else
    {
     vysledek = clickEqual();         //volá funkciu clickEqual()
     oper.setOperation(Operation);    //nastaví operáciu
     display = "";                    //vynuluje display
    }
    return vysledek;                  //vráti výsledok clickEqual()(buď operand1, alebo výsledok)
}

void GUI::clickNumber(string number)
{
        display = display + number; //display je pomocný string na ukladanie čísel
}

void GUI::clickClear()
{
	oper.clear();	
}

void GUI::clickBack()
{
    //TODO
    display.pop_back();
}

double GUI::clickEqual()
{
    double vysledek;
    if(oper.getOperation() == "")               //nie je nastavená operácia
    {                                           //hodnotu displaya nastaví do operandu1
        vysledek = std::stod(display);          //to isté vráti
        oper.setOperand1(std::stod(display));
    }
    else                                        //operácia je nastavená
    {
        oper.setOperand2(std::stod(display));   //nastaví operand2
        vysledek = oper.calculate();            //vypočíta
        clickClear();                           //vymaže operandy a operátor
        oper.setOperand1(vysledek);             //operand1 nastaví na výsledok
        display = to_string(vysledek);          //do display nastaví výsledok(operand1)
    }
    return vysledek;
}
