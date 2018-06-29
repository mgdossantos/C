#include <string.h>
#include <stdio.h>

int main(){

	char nome1[7]="marcela";
	char nome2[7]="rafael";

	if(strcmp(nome1,nome2)==0){
		printf("iguais");
	}
	else{
		if(strcmp(nome1,nome2)>0){
			printf("%s - %s",nome2,nome1);
		}
		else{
			printf("%s - %s",nome1, nome2);	
		}
	}
	return 0;
}