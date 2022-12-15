/*Escrever um programa que leia uma quantidade desconhecida de números e conte
quantos deles estão nos seguintes intervalos: [0..25], [26..50], [51..75] e [76..100]. A
entrada de dados deve terminar quando for lido um número negativo.*/
#include<stdio.h>

main()
{
	
	int num, f1=0, f2=0, f3=0, f4=0;
	
	printf("Digite um numero: ");
	
	scanf("%d", &num);
	
	while(num>=0)
	{
		if(num<=25)
			f1++;
		else
			if(num<=50)
			f2++;
			else
				if(num<=75)
				f3++;
				else
				if(num<=100)
				f4++;
		printf("\n Digite um numero: "); 
		
		scanf("%d",&num);			
	}
		printf("\n Faixa 1 - [0..25]: %d",f1);
		printf("\n Faixa 2 - [26..50]: %d",f2);
		printf("\n Faixa 3 - [51..75]: %d",f3);
		printf("\n Faixa 4 - [76..100]: %d",f4);
}
