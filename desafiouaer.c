#include <stdio.h>
int main(){
	int qtdwindowserver=0;
	int qtdunix=0;
	int qtdlinux=0;
	int qtdnetware=0;
	int qtdmacos=0;
	int qtdoutro=0;
	int voto=0;
	int cont=0;
	float per_windowserver, per_unix, per_linux,per_netware,per_macos,per_outro;
	voto=-1;
	while(voto!=0){
		printf("Pesquisa: Qual o melhor SO para ser usado em servidores. Digite sua opcao:\n");
		printf("1 - Windows Server\n2 - Unix\n3 - Linux\n4 - Netware\n5 - MacOs\n6 - Outro\n0 - Encerrar Votacao\n");
		scanf("%d",&voto);
		switch(voto){
			case 1:
				qtdwindowserver++;
				cont++;
				break;
			case 2:
				qtdunix++;
				cont++;
				break;
			case 3:
				qtdlinux++;
				cont++;
				break;
			case 4:
				qtdnetware++;
				cont++;
				break;
			case 5:
				qtdmacos++;
				cont++;
				break;
			case 6:
				qtdoutro++;
				cont++;
				break;
			case 0:
				break;
			default:
				printf("Opcao invalida. Digite um valor valido\n");

		}
	}
	per_windowserver=(float)qtdwindowserver/cont;
	per_windowserver=per_windowserver*100;
	
	per_unix=(float)qtdunix/cont;
	per_unix=per_unix*100;
	
	per_linux=(float)qtdlinux/cont;
	per_linux=per_linux*100;

	per_macos=(float)qtdmacos/cont;
	per_macos=per_macos*100;

	per_netware=(float)qtdnetware/cont;
	per_netware=per_netware*100;

	per_outro=(float)qtdoutro/cont;
	per_outro=per_outro*100;

	printf("*** Sistema Operacional\tVotos\tPercentual%% ***\n");
	printf("Windows Server\t\t%d\t%.2f\n",qtdwindowserver,per_windowserver);
	printf("Unix\t\t\t%d\t%.2f\n",qtdunix,per_unix);
	printf("Linux\t\t\t%d\t%.2f\n",qtdlinux,per_linux);
	printf("MacOs\t\t\t%d\t%.2f\n",qtdmacos,per_macos);
	printf("Netware\t\t\t%d\t%.2f\n",qtdnetware,per_netware);
	printf("Outro\t\t\t%d\t%.2f\n",qtdoutro,per_outro);
	return 0;
}