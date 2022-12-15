/*Faça um programa que leia as 3 notas de um aluno e calcule a média aritmética deste aluno.*/
#include<stdio.h>

main()
{
  float nota1, nota2, nota3, media;
  
  printf("\n Insira suas notas: ");
    
  scanf("%f", &nota1);
  
  scanf("%f", &nota2);
  
  scanf("%f", &nota3);
  
  media = (nota1 + nota2 + nota3) / 3;
  
  printf("\n Media final = %.2f", media);
}
 
