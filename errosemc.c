#include <stdio.h>
int main(){
	float nota1,nota2,media;
	nota1=7;
	nota2=8;

	media=(nota1+nota2)/2;
	printf("%.2f\n",media);

	if(media>=7){
		printf("APROVADO\n");
	}
	else{
		printf("REPROVADO\n");
	}

	return 0;
}