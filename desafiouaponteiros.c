#include <stdio.h>
#include <stdlib.h>

void main() {
	
	 int num, i, *ptr, sum = 0;

    printf("Entre com a quantidade de elementos: ");
    scanf("%d", &num);

    ptr = (int*) calloc(num,sizeof(int));  //alocando espaco de memoria 
   

