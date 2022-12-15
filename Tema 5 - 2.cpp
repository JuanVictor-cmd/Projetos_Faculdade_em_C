/* Entrar como um número inteiro e informar o dia da semana correspondente.*/
#include<stdio.h>

main()
{
	char dia;
	
	printf("Digite o numero da semana: ");
	
	scanf("%c", &dia);
	
	switch (dia){
		
		case '1':{
			printf("Domingo");
			break;
		}
		case '2':{
			printf("Segunda");
			break;
		}
		case '3':{
			printf("Terca");
			break;
		}
		case '4':{
			printf("Quarta");
			break;
		}
		case '5':{
			printf("Quinta");
			break;
		}
		case '6':{
			printf("Sexta");
			break;
		}
		case '7':{
			printf("Sabado");
			break;
		}
		default:{
			printf("O numero digitado esta incorreto");
			break;
		}
	}
}
