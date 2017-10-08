#include <stdio.h>
#include <stdlib.h>
#include "calculate.h"

int main(void) {

	double* a = malloc(sizeof(double));
	double* b = malloc(sizeof(double));
	char* op = malloc(sizeof(char));

	printf("give two numbers\n");
	scanf("%lf%lf",a,b);
	getchar();	

	double res = 0;
	do{
		printf("give an operator\n");
		scanf("%c", op);
		getchar();		

		res = calculate(*a,*b,*op);
		if(res == -1) printf("%c not valid operator. Valid operators are +, -, *, / and ^.\n", *op);
		else printf("%.2lf%c%.2lf=%.2lf\n",*a,*op,*b,res);

	} while(res == -1);

	free(a);
	free(b);
	free(op);
}
