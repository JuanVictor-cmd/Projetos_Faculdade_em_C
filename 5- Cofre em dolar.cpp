/*Fa�a o programa que calcule o valor em Reais, correspondente aos d�lares que um turista possui no cofre do hotel. 
Solicitar os dados: Quantidade de d�lares guardados no cofre e cota��o do d�lar naquele dia*/

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
