/*A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) presta��es sem juros.
Fa�a um programa que receba um valor de uma compra e mostre o valor das presta��es*/ 

#include<stdio.h>

main()
{
	float compra, prestacao;
	
	prestacao=compra/5;
	
	printf("\n Digite o valor da sua compra: ");
	
	scanf("%f", &compra);
	
	prestacao=compra/5;
	
	printf("\n O valor das prestacoes= %.2f", prestacao);

}
	
