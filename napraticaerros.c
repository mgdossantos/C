#include <stdio.h>
/* Este codigo calcula o percentua de reajuste para faixas de salario */
int main(){
	double salarioAtual, salarioReajuste, reajuste, percentual;
	printf("Qual o salario atual?\n");
	scanf("%lf",&salarioAtual);
	//para salarios de ateh 280, o percentual eh de 20%
	if(salarioAtual <= 280){
		percentual=0.2;
	}
	else{
		//para salarios entre 280 e 700(inclusive) o reajuste é de 15%
		if(salarioAtual <=700){
			percentual=0.15;
		}
		else{
			//para salarios entre 700 e 1500(inclusive) o reajuste é de 10%
			if(salarioAtual<=1500){
				percentual=0.1;
			}
			else{
				//para salarios acima de 150 o reajuste é de 5%
				percentual=0.05;
			}
		}
	}

	//Calculo do reajuste e do salario atualizado
	reajuste=salarioAtual*percentual;
	salarioReajuste=salarioAtual+reajuste;
	//saida de dadis: salario, percentual, reajuste e salario atualizado com o reajuste
	printf("Salario Atual: R$ %.2lf\n",salarioAtual);
	printf("Percentual: %.2lf%%\n",percentual*100);
	printf("Reajuste: R$ %.2lf\n",reajuste );
	printf("Salario Reajustado: R$ %.2lf\n",salarioReajuste );
	return 0;
}