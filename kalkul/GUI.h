#ifndef GUI_H
#define GUI_H
#include "Operations.h"
#include "Mathf.h"
#include "Qlabel.h"
#include <stdbool.h>
#include <string>

	using namespace std;
	class GUI
	{
    private:
    	Operations oper;
	public:
        double clickOperand(string,string);
        string clickNumber(string,string);
		string clickClear();
		string clickBack(string);
	};
#endif
