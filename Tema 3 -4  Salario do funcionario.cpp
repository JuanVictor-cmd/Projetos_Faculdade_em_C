/*Escrever um algoritmo que leia o nome de um funcionário, seu numero de horas trabalhadas,
o valor que recebe por hora, o número de filhos com idade menor que 14 anos e o valor do salário
família (pago por filho com menos de 14 anos), e que calcule o salário total deste funcionário.
 Ao final escreva o seu nome e o seu salário total.*/
#include<stdio.h>

main()
{
	char nome[30];
	int horastrabalhadas;
	float valorhora, numfilhos, salariofamilia, salariototal;
	
	printf("\n Digite seu nome: ");
	
	scanf("%s", &nome);
	
	printf("\n Digite seu numero de horas trabalhadas: ");
	
	scanf("%d", &horastrabalhadas);
	
	printf("\n Digite o valor que recebe por hora: ");
	
	scanf("%f", &valorhora);
	
	printf("\n Digite o numero de filhos com idade menor que 14 anos: ");
	
	scanf("%f", &numfilhos);
	
	if(numfilhos==0)
	{
		printf("\n Voce nao tem filhos");
	}
	else
	{
		printf("\n Voce tem %.0f filhos", numfilhos);
	}		
	printf("\n Digite o valor do salario familia: ");

	scanf("%f", &salariofamilia);
	
	salariototal=(horastrabalhadas*valorhora)+numfilhos*salariofamilia;
	
	printf("\n %s seu salario final = %.2f", nome,salariototal);
	
}
