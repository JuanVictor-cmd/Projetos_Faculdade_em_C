/*Fa�a um programa que leia dois valores para as vari�veis A e B e efetue a troca dos valores de forma que a vari�vel
A passe a possuir o valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A. 
Apresente os valores trocados. O programa dever� permitir a troca dos n�meros cinco vezes. */
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
