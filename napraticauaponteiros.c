#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num, i, *ptr, sum = 0;

    printf("Entre com a quantidade de sensores: ");
    scanf("%d", &num);

    ptr = (int*) malloc(num * sizeof(int));  //alocando espaco de memoria 
   
    if(ptr == NULL)                     
    {
        printf("Erro!! Houve um erro na alocacao de memoria.");
        exit(0);
    }

    int* enderecoSensores[num];

    for(i = 0; i < num; ++i)
    {
        printf("Digite a leitura do sensore %d: ",i);
        scanf("%d", ptr + i);
        sum += *(ptr + i);
        enderecoSensores[i]=ptr+i;
    }


    for(i = 0; i < num; ++i)
    {
        printf("Leitura Sensor [%d]: %d\n", i,*(ptr + i));
        printf("Endereço de memoria Sensor [%d]: %p\n", i,ptr + i);
    }

    free(ptr);
    return 0;
}