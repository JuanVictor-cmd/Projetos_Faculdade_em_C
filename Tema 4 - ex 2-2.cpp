/*Uma empresa concede aumentos de salários aos seus funcionários,variáveis de acordo com o cargo.
Construa um algoritmo que leia o salário e o cargo de um funcionário e calcule o novo salário.
Se o cargo do funcionário não estiver na tabela, ele deverá então, receber 10% de aumento. 
Mostre o salário antigo, o novo salário e a diferença.
Os cargos e aumentos considerados são:

gerente: 25%
engenheiro: 20%
técnico: 15%
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
