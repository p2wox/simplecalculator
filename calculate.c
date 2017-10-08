#include <math.h>
#include "calculate.h"
//Calculates operation op between numbers a and b. returns 0 if operator is not recognised


double calculate(double a, double b, char op){
	if(op == '+') return a+b;
	if(op == '-') return a-b;
	if(op == '*') return a*b;
	if(op == '/') return a/b;
	if(op == '^') return pow(a,b); 
	else return -1;

}
