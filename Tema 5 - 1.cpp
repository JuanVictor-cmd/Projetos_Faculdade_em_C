/*Tendo como dados de entrada a altura e o sexo de uma pessoa (M - masculino e F - feminino),
construa um programa que calcule seu peso ideal, utilizando as seguintes fórmulas: 

- para homens: (72.7*h)-58 

- para mulheres: (62.1*h)-44.7 

*/
#include<stdio.h>

main()
{
	float h, peso;
	
	char sexo;
	
	printf("Digite a sua altura: ");
	
	scanf("%f", &h);
	
	printf("\n Digite seu sexo: ");
	
	scanf(" %c", &sexo);
	
	switch (sexo){
	
	case 'M':
	case 'm':
	{
		peso = (72.7*h)-58; 
		break;
	}	
	case 'F':
	case 'f':
	{
		peso = (62.1*h)-44.7; 
		break;
	}	
	default:	
		printf("\n Sexo invalido");
		
}	
	printf("\n Peso ideal: %f",peso);				
}
