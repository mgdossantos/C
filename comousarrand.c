#include <stdio.h>
#include <stdlib.h>//biblioteca p/ uso do rand
#include <time.h>//biblioteca p/ uso do time, usado p/ q o num aleatorio seja sempre diferente


int main()
{
	srand(time(NULL));
	int r;
	printf("Gerando um numero entre 0 e 5 com o comando rand(): ");
 	r=rand()%6;
 	printf("%i\n",r);

	return 0;
}