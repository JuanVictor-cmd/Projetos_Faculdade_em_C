/*Crie um programa que calcula o desconto previdenciário de dez funcionários. 
Dado um salário, o programa deve retornar o valor do desconto proporcional ao mesmo. 
O cálculo segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de desconto é 318,20. 
Sendo assim, ou o programa retorna o valor equivalente a 11% sobre o salário ou 318,20.*/
#include<stdio.h>

main()
{
	float salario, desconto; 
	int i; 
	for(i=1;i<=10;i++) 
	{
		printf("\n ----- Funcionario %d -----",i);
		
		printf("\n Digite seu salario: "); 
		
		scanf("%f",&salario); 
		
		desconto=salario*11/100;
		
		if (desconto>=318.20)
		{

			printf("\n Desconto total = 318.20");
		}
		else
		 	if (desconto<=318.20)
			{
			 printf("Seu desconto previdenciario: %2.f", desconto);	
			}
	}
 } 




