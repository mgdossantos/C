#include <stdio.h>
#define NUMEROTENTATIVAS=3


int main()

{
	printf("*************************************\n");
	printf("* Bem-vindo ao Jogo de Adivinhacao! *\n");
	printf("*************************************\n");
	
	int numeroSecreto=42;
	int chute;

	for (int i = 1; i <=NUMEROTENTATIVAS; i++)
	{
		
		
		printf("Digite seu chute: ");
		scanf("%d",&chute);

		int acertou=chute==numeroSecreto;

		if(acertou){
			printf("Parabens voce acertou!!!\n");
			break;
		}
		else{
			if(chute>numeroSecreto){
				printf("Voce errou. Seu chute foi maior que o numero Secreto\n");
			}
			else{
				printf("Voce errou. Seu chute foi menor que o numero Secreto\n");
			}
		}
	}

	printf("Fim do jogo!\n");
	return 0;

}

