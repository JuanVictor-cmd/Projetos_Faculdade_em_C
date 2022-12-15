/*Faça um programa que receba o preço de custo de um produto e mostre o valor de venda. 
Sabe-se que será acrescido um percentual informado pelo usuário sobre o preço de custo.*/

#include<stdio.h>

main()
{
	float custo, venda, percentual;
	
	printf("\n Digite o custo do produto: ");
	
	scanf ("%f", &custo);
			
	printf("\n Digite o percentual para venda: ");
	
	scanf("%f", &percentual);

	percentual=percentual/100*custo;
	
	printf("\n O valor de acrescimo= %.2f", percentual);
	
	venda=custo+percentual;
	
	printf("\n O valor final da venda =  %.2f ", venda);
	
}
