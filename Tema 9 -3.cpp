/*Analise cada um dos programas e os reescreva utilizando subrotinas.*/

#include <stdio.h>

float VALOR,NVALOR,DESCONTO;
void leitura()
{
  printf("\nEntre com o valor do produto:  ");
  scanf("%f", &VALOR);	
}
void saida()
{
  printf("Desconto: %.2f \n", DESCONTO);
  printf("Valor com  Desconto: %.2f", NVALOR);	
}

main() 
{
  leitura(); 
  DESCONTO = VALOR*9/100;
  NVALOR = VALOR - DESCONTO;
  saida();
  
}
