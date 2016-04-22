#ifndef GUI_H
#define GUI_H
#include "Operations.h"
#include "Mathf.h"
#include <stdbool.h>
#include <string>

	using namespace std;
	class GUI
	{
	public:
		bool clickOperand(string);
		void clickNumber(string);
		void clickClear();
		void clickBack();
		string clickEqual();
	};
#endif
