#include <stdio.h>
#include <math.h> //biblioteca para uso de funcoes e constantes matematicas
/* Codigo que calcula a area e o perimetro de um circulo
	tendo como entrada via usuario o raio
	Author: Marcela Santos
	Data: 17/02/208*/
// para compilar use: gcc dicadoprofessorerros.c -lm
int main()
{
	//declaracao das variaveis
	double raio,area, perimetro;
	printf("Digite o valor do raio: ");
	scanf("%lf",&raio);
	//calculo do perimetro e da area
	perimetro= 2*M_PI*raio;
	area= M_PI*pow(raio,2);
	//saida de dados
	printf("Perimetro: %.2lf\n",perimetro);
	printf("Area: %.2lf\n",area);
	return 0;
}
