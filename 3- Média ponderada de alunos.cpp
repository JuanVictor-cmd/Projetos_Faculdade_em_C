/*Faça um programa que leia as 3 notas de um aluno e calcule a média final deste aluno. 
Considerar que a média é ponderada e que o peso das notas é: 2 ,3 e 5, respectivamente.*/

#include<stdio.h>

main()
{
	
    float nota1, nota2, nota3, media;
  
    printf("\n Insira suas notas: ");
    
    scanf("%f", &nota1);

	printf("\n Insira a segunda nota: ");
  
    scanf("%f", &nota2);
  
    printf("\n Insira a terceira nota: ");
  
    scanf("%f", &nota3);
  
    media = (nota1*2 + nota2*3 + nota3*5)/10;
  
    printf("\n Media final = %.1f", media);
    
}
