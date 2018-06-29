#include <stdio.h>
int main(){
	/*
	1 - soma
	2 - subtracao
	3 - multiplicacao
	4 - divisao
	5 - encerrar calculadora */
	int operador;
	float numero1,numero2,resultado;

	do{
		printf("--- Menu ---\n");
		printf("1 - Soma\n");
		printf("2 - Subtracao\n");
		printf("3 - Multiplicao\n");
		printf("4 - Divisao\n");
		printf("5 - Encerrar\n");
		scanf("%d",&operador);

		if(operador>=1 && operador<=4){
			printf("Digite o primeiro numero: ");
			scanf("%f",&numero1);
			printf("Digite o segundo numero: ");
			scanf("%f",&numero2);
			}

		
		switch(operador){
			case 1:
				resultado=numero1+numero2;
				printf("Resultado da operacao Soma entre %.2f e %.2f: %.2f\n",numero1,numero2,resultado);
				break;
			case 2:
				resultado=numero1-numero2;
				printf("Resultado da operacao subtracao entre %.2f e %.2f: %.2f\n",numero1,numero2,resultado);
				break;
			case 3:
				resultado=numero1*numero2;
				printf("Resultado da operacao Multiplicacao entre %.2f e %.2f: %.2f\n",numero1,numero2,resultado);
				break;	
			case 4:
				resultado=numero1/numero2;
				printf("Resultado da operacao Divisao entre %.2f e %.2f: %.2f\n",numero1,numero2,resultado);
				break;
			case 5:
				printf("Encerrando calculadora!!\n");
				break;
			default:
				printf("Operador invalido!!\n");
		}

	}
	while(operador!=5);
	
}