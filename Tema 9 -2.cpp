/*Analise cada um dos programas e os reescreva utilizando subrotinas.*/

#include <stdio.h>

float N1,N2,N3,M;
void leitura()
{
  printf("\nEntre com a  nota 1:  ");
  scanf("%f", &N1);
  printf("\nEntre com a  nota 2:  ");
  scanf("%f", &N2);
  printf("\nEntre com a  nota 3:  ");
  scanf("%f", &N3);
}
void saida()
{
  printf("Media: %.1f \n", M);		
}
main() 
{
  leitura();	
  M = (N1+N2+N3)/3;
  saida();
}
