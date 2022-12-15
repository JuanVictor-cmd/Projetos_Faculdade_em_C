/*Fazer um algoritmo ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros (1 polegada = 25,4 mm).*/
#include<stdio.h>

main()
{
	
	float polegada, milimetro;
	
	printf("\n Digite a quantidade de chuva em polegada: ");
	
	scanf("%f", &polegada);
	
	milimetro=polegada*25.4;
	
	printf("\n A chuva em milimetros: %.2f", milimetro);
	
}
