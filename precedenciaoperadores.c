#include <stdio.h>
int main(){
	float a,b,c,resultado;
	a=15;
	b=10;
	c=5;

	resultado=a/(b*c);
	printf("Expressao a/(b*c): %.2lf\n",resultado);

	resultado=(a/b)*c;
	printf("Expressao (a/b)*c: %.2lf\n",resultado);
	
	return 0;
}