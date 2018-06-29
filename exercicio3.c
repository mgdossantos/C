#include <stdio.h>
#include <stdlib.h> //necessário para usar as funções malloc() e free()
#include <conio.h>
 
int main(void)
{
  float *v; //definindo o ponteiro v
  int i, num_componentes;    
   
  printf("Informe o numero de componentes do vetor\n");
  scanf("%d", &num_componentes);
   
   for (i = 0;i < num_componentes; i++)
  {
     printf("%.2f\n",v[i]);
  }       

  //liberando o espaço de memória alocado 
  free(v);

  getch();
  return 0;
}    