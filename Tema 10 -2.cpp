/*2- Crie uma função que receba um valor e diga se é nulo ou não.*/ 
#include<stdio.h>

char* testanulo(int n)
{
    if(n==0)
        return "Nulo";
    else
        return "Nao-Nulo";    
}
main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("%s", testanulo(num));
}


