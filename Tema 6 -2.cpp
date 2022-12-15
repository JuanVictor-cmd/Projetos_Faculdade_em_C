/*Faça um programa que leia dois valores para as variáveis A e B e efetue a troca dos valores de forma que a variável
A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. 
Apresente os valores trocados. O programa deverá permitir a troca dos números cinco vezes. */
#include<stdio.h>

main()
{
	float A, B, troca;
	int i;
	for (i=1;i<=5;i++)
	{
		printf("\n ----- Troca %d -----",i);
		
		printf("\n Digite o valor de A: ");
	
		scanf("%f",&A);
	
		printf("\n Digite o valor de B: ");
	
		scanf("%f",&B);
	
		troca=B;
		B=A;
		A=troca;
	
		printf("\n O valor de A: %.1f",A);
		printf("\n O valor de B: %.1f",B);
	}	
}
