/*Faça o programa que calcule o valor em Reais, correspondente aos dólares que um turista possui no cofre do hotel. 
Solicitar os dados: Quantidade de dólares guardados no cofre e cotação do dólar naquele dia*/

#include<stdio.h>

main()
{
	
	float dolarhoje, dolarcofre, dolarreal, real;
	
	printf("\n Digite o dinheiro em seu cofre: ");
	
	scanf("%f", &dolarcofre);
	
	printf("\n Digite a cotacao do dia: ");
	
	scanf("%f", &dolarhoje);	

	real=dolarhoje*dolarcofre;	

    printf("\n O dolar em real no seu cofre = %.2f \n", real);
  
}
