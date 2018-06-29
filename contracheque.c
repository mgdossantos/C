#include <stdio.h>
int main(){
	int horasTrabalhadas;
	double salarioBruto, salarioLiquido, descontos,valorHora,inss,ir,sindicato;
	int qtdSexoF,qtdsexoM,qtdsexoN;

	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%d",&horasTrabalhadas);
	printf("Digite o valor da hora trabalhada: ");
	scanf("%lf",&valorHora);
	salarioBruto=horasTrabalhadas*valorHora;
	ir=0.11*salarioBruto;
	inss=0.08*salarioBruto;
	sindicato=0.05*salarioBruto;
	descontos=ir+inss+sindicato;
	salarioLiquido=salarioBruto-descontos;
	printf("+ Salário Bruto : R$ %.2lf\n",salarioBruto);
	printf("- IR (11%%) : R$ %.2lf\n",ir);
	printf("- INSS (8%%) : R$ %.2lf\n",inss);
	printf("- Sindicato (5%%) : R$ %.2lf\n",sindicato);
	printf("= Salário Liquido : R$ %.2lf\n",salarioLiquido);
	return 0;
}