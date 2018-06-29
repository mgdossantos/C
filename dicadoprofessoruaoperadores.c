#include <stdio.h>
#include <stdbool.h>
int main(){
	float taxa, livro,disponivel,convertido;
	bool resposta;
	printf("Qual o valor disponivel para comprar em reais?\n");
	scanf("%f",&disponivel);
	printf("Qual o valor do livro em dólar?\n");
	scanf("%f",&livro);
	printf("Qual a taxa atual de conversao dólar/real?");
	scanf("%f",&taxa);
	
	convertido=taxa*livro;
	resposta= convertido <= disponivel;
	
	printf("Valor do livro em dolar: %.2lf\n",livro);
	printf("Valor do livro em reais: %.2lf\n",convertido);
	printf("Valor disponivel: %.2lf\n",disponivel);
	printf("Resposta: %d\n",resposta);
	return 0;
}
