/*Uma empresa concede aumentos de sal�rios aos seus funcion�rios,vari�veis de acordo com o cargo.
Construa um algoritmo que leia o sal�rio e o cargo de um funcion�rio e calcule o novo sal�rio.
Se o cargo do funcion�rio n�o estiver na tabela, ele dever� ent�o, receber 10% de aumento. 
Mostre o sal�rio antigo, o novo sal�rio e a diferen�a.
Os cargos e aumentos considerados s�o:

gerente: 25%
engenheiro: 20%
t�cnico: 15%
*/
#include<stdio.h>
#include<string.h>

main()
{
	
	float salario , novosalario;
	
	char cargo[40];
	
	printf("Digite seu salario: ");
	
	scanf("%f", &salario);
	
	printf("Digite seu cargo: "); 
	
	scanf("%s", &cargo);
	
	if (strcmp(cargo, "gerente")==0){
		novosalario=(salario*25/100);
		printf("Novo salario = %.2f", novosalario);
	}
	else 
		if (strcmp(cargo, "engenheiro")==0){
			novosalario=(salario*20/100);
			printf("Novo salario = %.2f", novosalario);
		}
	else
		if (strcmp(cargo, "tecnico")==0){
			novosalario=(salario*15/100);
			printf("Novo salario = %.2f", novosalario);	
		}
	
	
	
	
	
	
}
