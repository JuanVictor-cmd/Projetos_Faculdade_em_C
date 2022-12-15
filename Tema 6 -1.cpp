/*Faça um programa que leia cinco temperaturas em graus Celsius e apresente-as convertidas em graus Fahrenheit.
A fórmula de conversão é: F = (9 * C + 160) / 5, na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius.*/
#include<stdio.h>

main()
{
	
	float celsius, faren;
	int i;
	for(i=1;i<=5;i++)
	{
		printf("\n ----- Temperatura %d -----",i);
		
		printf("\n Digite a temperatura em graus Celsius: ");
	
		scanf("%f",&celsius);
	
		faren=(9*celsius+160)/5;
	
		printf("\n Temperatura em Farenheit: %.2f",faren);
	}
}
