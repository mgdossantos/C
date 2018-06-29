#include <stdio.h>
int main(){
	int qtd,contador;
	float valor,soma;
	soma=0;
	printf(" Lista de Compras \n");
	for (int i = 0; i <6;i++)
	{
		printf("Digite a qtd: ");
		scanf("%d",&qtd);
		printf("Digite o valor por unidade: ");
		scanf("%f",&valor);
		valor=valor*qtd;
		soma=soma+valor;		
	}
	printf("Valor total da compra: R$ %.2f\n",soma);
	return 0;
}