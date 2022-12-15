/* Uma empresa resolveu conceder descontos de 10% nas vendas superiores a 1000 reais.
Faça um programa que leia o valor da venda e informe o valor a ser pago.*/
#include<stdio.h>

main()
{
	
	float valorvenda, desconto;
	
	printf("Digite o valor da compra: ");
	
	scanf("%f", &valorvenda);
	
	desconto=valorvenda*10/100;
	
	if (valorvenda >= 1000)
	{
	
		printf("Valor a ser pago = %.2f", desconto);
	}
	else
	{
		if (valorvenda<1000)
		printf("Valor a ser pago = %.2f", valorvenda);
	}	
	
}
