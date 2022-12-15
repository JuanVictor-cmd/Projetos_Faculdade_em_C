/*Escrever um algoritmo que leia: • a percentagem do IPI a ser acrescido no valor das pecas;
• o código da peca 1, valor unitário da peca 1, quantidade de pecas 1; • o código da peca 2,
valor unitário da peca 2, quantidade de pecas 2. O algoritmo deve calcular o valor total a ser pago e apresentar o resultado.*/
#include<stdio.h>

main()
{
	float IPI, c1, valoru1, quant1, c2, valoru2, quant2, total;
	
	printf("\n Digite a porcentagem do IPI: ");
	
	scanf("%f", &IPI);
	
	printf("\n Digite o codigo da peca 1: ");
	
	scanf("%f", &c1);
	
	printf("\n Digite o valor unitario da peca 1: ");
	
	scanf("%f", &valoru1);
	
	printf("\n Digite a quantidade de pecas 1: ");
	
	scanf("%f", &quant1);
	
	printf("\n Digite o codigo da peca 2: ");
	
	scanf("%f", &c2);
	
	printf("\n Digite o valor unitario da peca 2: ");
	
	scanf("%f", &valoru2);
	
	printf("\n Digite a quantidade de pecas 2: ");
	
	scanf("%f", &quant2);
	
	total=(valoru1*quant1+valoru2*quant2)*(IPI/100+1);
	
	printf("\n O valor total a ser pago = %.2f", total);
}
