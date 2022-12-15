/*Calculadora*/
#include<stdio.h>

main()
{
    int num1, num2, multi, div, soma, sub, resto;
    printf("--- Calculadora 1.0 ---");
    printf("\n Entre com o primeiro numero: ");
    scanf("%d", &num1);
    printf("\n Entre com o segundo numero: ");
    scanf("%d", &num2);

    soma = (num1+num2);

    sub = (num1-num2);

    multi = (num1*num2);

    div = (num1/num2);

    resto = (num1%num2);

    printf("\n Soma: %d", soma);
    printf("\n Subtracao: %d", sub);
    printf("\n Multiplicacao: %d", multi);
    printf("\n Divisao: %d", div);
    printf("\n Resto da Divisao: %d\n", resto);
    system ("Pause");
}