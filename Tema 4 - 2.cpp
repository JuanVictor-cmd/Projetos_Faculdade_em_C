/*Entrar com 3 notas de um aluno e informar a sua situação (APROVADO caso média aritmética >=7 e REPROVADO caso contrário).*/
#include<stdio.h>

main()
{
	float nota1, nota2, nota3, media;
	
	printf("Digite sua primeira nota: ");
	
	scanf("%f", &nota1);
	
	printf("Digite sua segunda nota: ");
	
	scanf("%f", &nota2);
	
	printf("Digite sua terceira nota: ");
	
	scanf("%f", &nota3);
	
	media=nota1+nota2+nota3/3;
	
	if (media>=7)
		
		printf("APROVADO!");
	
	else
		printf("REPROVADO!");
	
}
