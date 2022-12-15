#include<stdio.h>
/*Faça um programa que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%.*/

main()
{
	float produto, desconto, valorfinal;
	
	printf("\n Insira o valor do produto: ");
	
	scanf("%f", &produto);
	
	desconto=produto*9/100;
	
	valorfinal=produto-desconto;
	
	printf("\n Desconto do produto= %.2f", desconto);
	
	printf("\n Valor final do produto= %.2f", valorfinal);	
	
}
