#include <stdio.h>
int main(){
	int numero1,numero2,maior;

	printf("Digite um numero: ");
	scanf("%d",&numero1);
	printf("Digite outro numero: ");
	scanf("%d",&numero2);
	if(numero1>numero2){
		maior=numero1;
	}
	else{
		maior=numero2;
	}
	printf("Maior: %d\n",maior);
	return 0;
}