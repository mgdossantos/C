#include <stdio.h>
int main(){
	int numero;
	printf("Digite um numero: ");
	scanf("%d",&numero);
	if(numero>0){
		printf("O numero eh maior que 0");
	}
	else{
		printf("O numero eh menor ou igual a 0");
	}
	return 0;
}