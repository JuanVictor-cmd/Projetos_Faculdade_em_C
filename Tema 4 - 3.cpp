/*Solicitar um número inteiro e informar se é positivo, negativo ou nulo.*/
#include<stdio.h>

main()
{
	
	int numero;
	
	printf("Digite um numero inteiro: ");
	
	scanf("%d", &numero);
	
	if (numero>=1)
		printf("POSITIVO!");
	else
	if (numero<0)
		printf("NEGATIVO!");
	else
	if (numero==0)
	printf("NULO!");
	
}
