/*Escrever um algoritmo que leia o valor de uma compra em dólares, a cotação do dólar no dia da compra,
o percentual de ICMS e o percentual de lucro da empresa. Calcule e escreva o valor a ser pago em reais,
sabendo-se que o percentual de lucro e o percentual de ICMS incidem sobre o valor em reais.*/

#include<stdio.h>

main()
{
	float compra, cdolar, ICMS, pempresa, total, LUCRO;
	
	printf("\n Digite o valor da compra em dolar: ");
	
	scanf("%f", &compra);

	printf("\n Digite a cotacao do dolar hoje: ");
	
	scanf("%f", &cdolar);
	
	printf("\n Digite o percentual de ICMS: ");
	
	scanf("%f", &ICMS);
	
	printf("\n Digite o percentual de lucro da empresa: ");
	
	scanf("%f", &pempresa);
	
	total = compra*cdolar;
	
	ICMS = total*ICMS/100;
	
	LUCRO = compra*pempresa/100;
	
	total = total+ICMS+pempresa;
	
	printf("\n O valor a ser pago em reais = %.2f", total);	
	
}
