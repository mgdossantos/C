#include <stdio.h>
int main(){
	int numero, antecessor, sucessor,contador,resultado,a,b,c;
	printf("Digite o numero que deseja saber o sucessor e antecessor: ");
	scanf("%d",&numero);
	
	antecessor=numero-1;
	sucessor=numero+1;
	printf("Numero digitado: %d\n",numero);
	printf("Seu antecessor: %d\n",antecessor);
	printf("Seu sucessor: %d\n",sucessor);

	
	printf("Tabulada de Multiplicacao de %d\n",numero);
	contador=1;
	resultado=numero*contador;
	printf("%d X %d: %d\n",numero,contador,resultado);
	contador++;
	resultado=numero*contador;
	printf("%d X %d: %d\n",numero,contador,resultado);
	contador++;
	resultado=numero*contador;
	printf("%d X %d: %d\n",numero,contador,resultado);
	contador++;
	resultado=numero*contador;
	printf("%d X %d: %d\n",numero,contador,resultado);
	contador++;
	resultado=numero*contador;
	printf("%d X %d: %d\n",numero,contador,resultado);
	contador++;
	resultado=numero*contador;
	printf("%d X %d: %d\n",numero,contador,resultado);
	contador++;
	resultado=numero*contador;
	printf("%d X %d: %d\n",numero,contador,resultado);
	contador++;
	resultado=numero*contador;
	printf("%d X %d: %d\n",numero,contador,resultado);
	contador++;
	resultado=numero*contador;
	printf("%d X %d: %d\n",numero,contador,resultado);
	contador++;
	resultado=numero*contador;
	printf("%d X %d: %d\n",numero,contador,resultado);

	printf("3 proximos numeros contado de 2 em 2\n");
	a=numero+2;
	b=a+2;
	c=b+2;
	printf("%d - %d - %d\n",a,b,c);

	return 0;
	
}