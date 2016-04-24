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
        string display = "";
	public:
        double clickOperand(string);
        void clickNumber(string);
		void clickClear();
		void clickBack();
        double clickEqual();
	};
#endif
