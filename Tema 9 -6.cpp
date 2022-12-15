/*Analise cada um dos programas e os reescreva utilizando subrotinas.*/

#include<stdio.h>

float PCUSTO,PERC,PVENDA;

void leitura()
{
	printf("Entre com o preco de custo: ");
	scanf("%f",&PCUSTO);
	printf("Entre com o percentual    : ");
	scanf("%f",&PERC);
}
void saida()
{
	printf("Valor da venda = %8.2f",PVENDA);
}

main()
{
	leitura();
	PVENDA= PCUSTO + (PCUSTO*PERC/100);
	saida();
}
