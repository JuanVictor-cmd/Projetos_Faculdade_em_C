/*Analise cada um dos programas e os reescreva utilizando subrotinas.*/

#include<stdio.h>

float VALOR,PREST;

void leitura()
{
	printf("Entre com a valor do produto: ");
	scanf("%f",&VALOR);
}
void saida()
{
	printf("\n Valor das prestacoes: %8.2f",PREST);
}


main()
{
	leitura();
    PREST = VALOR/5;
	saida();
}
	
