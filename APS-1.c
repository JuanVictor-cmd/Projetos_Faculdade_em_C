/*Escreva um programa em C que dê a mensagem “Dê duas palavras “ e leia duas strings
e guarde-as nas variáveis denominadas X e Y e ele deve comparar toda a string X com toda
a string Y. Se forem iguais ele deve escreve “As palavras são iguais” senão ele deve
escrever “As palavras são diferentes” .Depois o programa deve comparar os 5 primeiros
caracteres de X com os 5 primeiros caracteres de Y .Se forem todas iguais ele deve
escrever “Os 5 primeiros caracteres destas palavras são iguais entre si” senão ele deve
escrever “Pelo menos um dos 5 primeiros caracteres é diferente entre estas strings”.
Depois ele deve mostrar as palavras concatenadas na tela*/

#include<stdio.h>
#include<string.h>

int main()

{

    char x[50],y[50]; 
    
    printf("Dê duas palavras - Informe palavra 1: "); 
    
    gets(x); 

    printf("Dê duas palavras - Informe palavra 2: "); 
    
    gets(y); 

    if(strcmp(x,y)==0) 

        printf("\n As Palavras sao iguais");
    else
        printf("\n As Palavras sao diferentes");

    if (strncmp(x,y,5)==0)
    
        printf("\n Os 5 primeiros caracteres destas palavras sao iguais entre si");
    else
        printf("\n Pelo menos um dos 5 primeiros caracteres e diferente entre estas strings");
    
    printf ("\n Concatenando fica %s",strcat(x,y));     

}