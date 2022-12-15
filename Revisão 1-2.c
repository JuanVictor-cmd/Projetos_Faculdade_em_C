/*Escrever um programa que leia um numero inteiro e calcule a tabuada de 1 até 10. mostre a tabuada de forma:
1 x n = n
2 x n = n
...*/
#include<stdio.h>

main()
{
	int i,n;
	printf("\n Entre com o numero: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
     printf("\n %d x %d = %d",i,n,i*n);
}