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
	public:
        bool clickOperand(string);
        void clickNumber(double);
		void clickClear();
		void clickBack();
        double clickEqual();
	};
#endif
