#include <stdio.h>
int main(){
	int numero,soma;
	numero=-1
	soma=0;
	while(numero!=0){
		printf("Digite um numero:");
		scanf("%d",&numero);
		soma=soma+numero;
	}

	printf("A soma de todos os numeros digitados eh isso: %d",soma);
	return 0;
}

