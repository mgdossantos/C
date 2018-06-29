#include <stdio.h>
int main(){
	int numero,resto;
	printf("Digite o numero: ");
	scanf("%d", &numero);
	resto=numero%2;
	printf("Resto divisao: %d\n",resto);
	return 0;
}