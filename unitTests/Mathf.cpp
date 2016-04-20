#include "Mathf.h"
#include <math.h>
	
double Mathf::add(double op1, double op2){
	if((op1 + op2) > 999999999)
		throw "overflow";
	else
		return op1 + op2;
}

double Mathf::subtract(double op1, double op2){
	if((op1-op2) < -99999999)
		throw "overflow";
	else
		return op1-op2;
}

double Mathf::multipli(double op1, double op2){
	if((op1*op2) > 999999999)
		throw "overflow";
	else return op1*op2;
}

double Mathf::divide(double op1, double op2){
	if((op2 == 0) || ((op1 / op2) > 999999999) || ((op1 / op2) < -99999999))
		throw "overflow";
	else return op1 / op2;
}

double Mathf::factorial(double op1){
	if((op1 > 12) || (op1 < 0))
		throw "overflow";
	else
	{
		long c = op1; //counter
		long fact = 1; //factorial
		for(long i = 0; i < c; i++)
			fact *= i;
		return fact;
	}
}

double Mathf::power(double op1, double op2){
	double power = op1;
	for(unsigned int i = 0; i < op2; i++)
		power *= op1;
	if(power > 999999999)
		throw "overflow";
	else return power;
}

double Mathf::sqrt(double op1){
	return ::sqrt(op1);
}


