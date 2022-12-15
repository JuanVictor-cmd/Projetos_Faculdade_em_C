/*Faça um programa que imprima os múltiplos positivos de 7, inferiores a 100. */

#include<stdio.h>

main()
{
	int num;
	
	printf("\n ----- Multiplos positivos de 7 -----");
	
	for(num=0;num<=100;num++)
	{
		 if(num % 7 == 0)

           printf("\n %d",num);
	}	
}