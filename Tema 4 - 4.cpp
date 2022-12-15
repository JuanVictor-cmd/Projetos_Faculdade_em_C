/*Um banco concede um crédito especial aos seus clientes, variável com o saldo médio no último ano.
Construa um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo médio e o valor do crédito. Considerar:

-  Saldo médio  de 0 a 200:  nenhum crédito 

- Saldo médio de 200,01 a 400:  20% do valor do saldo médio 

- Saldo médio de 400,01 a 600: 30% do valor do saldo médio 

- Saldo médio acima de 600,01: 40% do valor do saldo médio*/
#include<stdio.h>

main()
{
	
	float saldomedio, saldomedio2, saldomedio3, saldomedio4;
	
	printf("Digite seu saldo: ");
	
	scanf("%f", &saldomedio);
	
	saldomedio2=saldomedio*20/100;
	
	saldomedio3=saldomedio*30/100;
	
	saldomedio4=saldomedio*40/100;
	
	if (saldomedio<=200)
	printf("Voce nao possui credito");
	
	else
		if(saldomedio==200.01 or saldomedio<=400){
			printf("Seu saldo medio: %.2f", saldomedio2);
		}
	
	else
		if(saldomedio>400 or saldomedio<600){
			printf("Seu saldo medio: %.2f", saldomedio3);
		}

	else 
		if(saldomedio>600.01){
			printf("Seu saldo medio: %.2f", saldomedio4);
		}
	
	
	
}
 
