#include <stdio.h>
int main(){
	int numero,soma,count;
	soma=0;
	printf("Quantas vezes vc quer que o loop aconteça?\n");
	scanf("%d",&count);
	for (int i = 0; i < count; i++)
	{
		printf("Digite um numero:");
		scanf("%d",&numero);
		soma=soma+numero;
	}
	
	printf("A soma de todos os numeros digitados eh: %d\n",soma);
	return 0;
}
