/* Crie uma função em linguagem C que receba 2 números e retorne o menor valor.*/
#include<stdio.h>

int valor(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}
main()
{
int n1, n2;
printf("Digite o primeiro numero: ");
scanf("%d", &n1);
printf("Digite o segundo numero: ");
scanf("%d", &n2);
printf("\n O menor valor = %d", valor(n1,n2));
}