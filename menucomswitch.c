#include <stdio.h>
int main(){
	int opcao;

	printf("** Menu usando o Switch **\n");
	printf("1 - Opcao 1\n");
	printf("2 - Opcao 2\n");
	printf("3 - Opcao 3\n");
	scanf("%d",&opcao);

	switch (opcao){
		case 1:
			printf("Voce escolheu a opcao 1\n");
			printf("Aqui poderiamos escrever as operacoes desse nivel do jogo\n");
			break;
		case 2:
			printf("Voce escolheu a opcao 2\n");
			printf("Aqui poderiamos escrever as operacoes desse nivel do jogo\n");
			break;
		case 3:
			printf("Voce escolheu a opcao 3\n");
			printf("Aqui poderiamos escrever as operacoes desse nivel do jogo\n");
			break;
		default:
			printf("Vc escolheu uma opcao inexistente\n");
	}
	printf("Saindo so switch e seguindo o programa\n");
	return 0;
}