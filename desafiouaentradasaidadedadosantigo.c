#include <stdio.h>
int main(){
	int numeroquestoscertas,numeroquestoeserradas,notafinal;
	printf("Digite o numero de questoes que voce acertou: ");
	scanf("%d",&numeroquestoscertas);
	printf("Digite o numero de questoes que voce errou: ");
	scanf("%d",&numeroquestoeserradas);
	notafinal=5*numeroquestoscertas-3*numeroquestoeserradas;
	printf("Media final: %d\n",notafinal);
	
}