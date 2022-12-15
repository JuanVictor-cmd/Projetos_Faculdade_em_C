/*Analise cada um dos programas e os reescreva utilizando subrotinas.*/

#include <stdio.h>

int numero;
int conta()
{
	return (numero*numero);
}
main() 
{
  int quadrado;
  printf("\nEntre com um numero inteiros nao-nulo:  ");
  scanf("%d", &numero);
  quadrado = conta();
  printf("O quadrado do numero %d : %d\n", numero, quadrado);
  
}
