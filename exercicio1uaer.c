#include <stdio.h>
int main(){
	int numero,contador,resultado;
	printf("Qual a tabuada de multiplicacai vc quer saber?");
	scanf("%d",&numero);
	
	while(contador<11){
		resultado=numero*contador;
		printf("%d x %d: %d\n",numero, contador,resultado);
		
	}
}