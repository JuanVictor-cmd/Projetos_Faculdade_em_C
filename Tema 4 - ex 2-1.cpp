/*Elabore um programa que dada a idade de um nadador classifica-o em uma das seguintes categorias: 

infantil A=5-7 anos;
infantil B=8-10 anos;
juvenil  A=11-13 anos;
juvenil  B=14-17 anos;
adulto= maiores de 18;
*/
#include<stdio.h>

main()
{
	int idade;
	
	printf("Digite sua idade: ");
	
	scanf("%d", &idade);
	
	if (idade<=10){
		printf("INFANTIL");
	}
	else 
		if (idade>=11 and idade<=17){
			printf("JUVENIL");
		}
	else
		if (idade>=18){
			printf("ADULTO");
		}	
}
