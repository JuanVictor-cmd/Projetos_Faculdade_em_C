/*Um banco concede um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano.
Construa um programa que leia o saldo m�dio de um cliente e calcule o valor do cr�dito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito. Considerar:

-  Saldo m�dio  de 0 a 200:  nenhum cr�dito 

- Saldo m�dio de 200,01 a 400:  20% do valor do saldo m�dio 

- Saldo m�dio de 400,01 a 600: 30% do valor do saldo m�dio 

- Saldo m�dio acima de 600,01: 40% do valor do saldo m�dio*/
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
 
