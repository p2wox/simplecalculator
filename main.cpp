#include <iostream>
#include "calculate.h"

int main(void) {

	double a;
	double b;
	char op;

	std::cout << "give two numbers\n";
	std::cin >> a;
	std::cin >> b;

	std::cout << "give an operator\n";
	std::cin >> op;
	
	double res = calculate(a,b,op);
	std::cout << a << op << b << "=" << res << "\n";

}
