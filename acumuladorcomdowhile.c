#include <stdio.h>
int main(){
	int numero,soma;
	soma=0;
	do
	{
		printf("Digite 0 para finalizar ou um numero para acumular: ");
		scanf("%d",&numero);
		soma=soma+numero;
	}
	while(numero!=0);
	
	printf("A soma de todos os numeros digitados eh: %d\n",soma);
	return 0;
}