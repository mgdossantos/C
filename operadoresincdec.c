#include <stdio.h>
int main(){
	int i,i2;
	i=10;
	printf("valor de i: %d\n",i);
	printf("valor de i pré incrementado: %d\n",++i);
	printf("valor de i pós incrementado: %d\n",i++);
	printf("valor de i: %d\n",i);
	i2=20;
	printf("valor de i2: %d\n",i2);
	printf("valor de i2 pré incrementado: %d\n",--i);
	printf("valor de i2 pós incrementado: %d\n",i--);
	printf("valor de i2: %d\n",i);
	return 0;
}