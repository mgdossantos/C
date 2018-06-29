#include <stdio.h>
int main(){
	int numero1,numero2;
	printf("Digite o primeiro numero: ");
	scanf("%d",&numero1);
	printf("Digite o segundo numero: ");
	scanf("%d",&numero2);
	if(numero1!=numero2){
		if(numero1>numero2){
			printf("Maior: %d\n",numero1);
		}
		else{
			printf("Maior: %d\n",numero2);
		}
	}
	else{
		printf("Numeros iguais!!!\n");
	}
	return 0;
}