#include <stdio.h>
int main(){
soma=0;
printf(" Lista de Compras n");
for (int i = 0; i <5;i++)
{
	printf("Digite a qtd: ");
	scanf("%d",&qtd);
	printf("Digite o valor por unidade: ");
	scanf("%f",&valor);
	valor=valor*qtd;
	soma=soma+valor;		
	i=i+1;
}