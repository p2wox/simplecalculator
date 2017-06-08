#include <cmath>

double calculate(double a, double b, char op){
	if(op == '+') return a+b;
	if(op == '-') return a-b;
	if(op == '*') return a*b;
	if(op == '/') return a/b;
	if(op == '^') return std::pow(a,b); 

}
