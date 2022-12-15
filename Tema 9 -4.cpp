/*Analise cada um dos programas e os reescreva utilizando subrotinas.*/

#include<stdio.h>

float VDOLAR, CDOLAR, VREAL;
void leitura()
{
	printf("Entre com a quantidade de dolares: ");
	scanf("%f",&VDOLAR);
	printf("Entre com a cotacao do dolar     : ");
	scanf("%f",&CDOLAR);
}
void saida()
{
	printf("\n Valor em Reais: %.2f",VREAL);
}
main()
{
	leitura();
	VREAL = VDOLAR * CDOLAR;
	saida();

}

