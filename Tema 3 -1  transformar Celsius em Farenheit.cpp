/*Fazer um algoritmo ler uma temperatura dada em graus Celsius e imprimir o equivalente em Farenheit. Onde: F=9/5C+32*/
#include<stdio.h>

main()
{
	
	float celsius, faren;
	
	printf("\n Digite a temperatura em Celsius: ");
	
	scanf("%f", &celsius);
	
	faren=(celsius*9/5)+32;
	
	printf("\n Temperatura em Farenheit: %.2f", faren);
	
}
