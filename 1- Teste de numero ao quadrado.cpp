/*Dado um número inteiro não-nulo, imprima o seu quadrado*/

#include <stdio.h>

main ()
{
	int num, quadrado;
	
	printf("\n Insira um numero nao-nulo: ");
	
	scanf("%d", &num);
	
	quadrado=num*num;
	
	printf("\n  O numero ao quadrado= %d", quadrado);
}
