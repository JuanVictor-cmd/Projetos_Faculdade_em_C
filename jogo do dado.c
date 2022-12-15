/*Gerador de Dados D20!*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
    int dado;
    system("CLS");
    printf("--- Gerador de Dados D20! ---\n");
    printf("\nMenu:\n \n1 - Jogar\n2 - Sair\n\n");
    printf("\n Digite o comando: ");
    scanf("%d", &dado);
    if (dado != 1)
        {
            exit(0);
        }
    while (1)
    {
        srand(time(NULL));
        printf("\n Resultado: %d \n", rand()%20+1);
        printf("\n Digite o comando: ");
        scanf("%d", &dado);
         if (dado != 1)
        {
            exit(0);
        }
    }
}




