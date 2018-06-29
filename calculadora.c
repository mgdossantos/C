#include <stdio.h>
int main(){
	float numero1,numero2;
	float soma,subtracao,multiplicacao,divisao;

	printf("*** Calculadora Modelo 1 ***\n");
	printf("Digite o primeiro numero: ");
	scanf("%f",&numero1);

	printf("Digite o segundo numero: ");
	scanf("%f",&numero2);

	soma=numero1+numero2;
	subtracao=numero1-numero2;
	multiplicacao=numero1*numero2;
	divisao=numero1/numero2;

	printf("Numero 1: %.2f\n",numero1);
	printf("Numero 2: %.2f\n",numero2);
	printf("Soma: %f\n",soma);
	printf("Subtracao entre numero 1 e numero 2: %.2f\n",subtracao);
	printf("Multiplicacao: %.2f\n",multiplicacao);
	printf("Divisao entre numero 1 e numero 2: %.2f\n",divisao);

	return 0;
}