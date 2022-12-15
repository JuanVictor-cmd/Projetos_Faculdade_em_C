//*1- Crie uma função que receba um valor e informe se ele é positivo ou não. *//
#include<stdio.h>
char* testaPositivo (int n)
{
	if (n>0)
	  return "Positivo";
	else
	  return "Nao Positivo";
}
main ()
{
	int num;
	printf("\n Entre com o numero: ");
	scanf("%d",&num);
	printf("\n %s",testaPositivo(num));
}


