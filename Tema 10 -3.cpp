 /*Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação
 do segundo grau e retorne o valor do delta, que é dado por 'b2 - 4ac' */
#include<stdio.h>

int valores(int a, int b, int c)
{
    return (b*b) - (4*a*c);
}
main()
{
    int n1, n2, n3;
    printf("Digite o valor1: ");
    scanf("%d", &n1);
    printf("Digite o valor2: ");
    scanf("%d", &n2);
    printf("Digite o valor3: ");
    scanf("%d", &n3);
    printf("\n Delta: %d", valores(n1,n2,n3));
}