/*Faça um programa que leia o sexo e a idade de 10 pessoas e ao final informe: 
 - Quantidade e porcentagem de homens; 
 - Quantidade e porcentagem de mulheres; 
 - Média das idades; 
 - Maior idade do grupo; 
 - Menor idade do grupo.
 */
#include<stdio.h>

main()
{
	
	char sexo;
	int idade,qf=0,qm=0,i,soma=0,maior,menor;
	float pf,pm,media;
	for(i=1;i<=10;i++)
	{
		printf("----- Pessoa %d -----",i);
		
		printf("\n Digite seu sexo: "); 
		
		scanf("%s",&sexo);
		
		printf("\n Digite sua idade: "); 
		
		scanf("%d",&idade);
		
		if(sexo=='F')
		  qf++; //qf=qf+1
		else
		  if(sexo=='M')
		     qm++; //qm=qm+1  
		soma+=idade;  //soma=soma+idade
		if(idade>maior || i==1)
		   maior=idade;
		if(idade<menor || i==1)
		   menor=idade;   
	}
	pf=qf*100/10;
	pm=qm*100/10;
	media=soma/10.0;
	printf("\n Quantidade de mulheres : %d  - %.1f %% ",qf,pf);
	printf("\n Quantidade de homens   : %d  - %.1f %% ",qm,pm); 
	printf("\n Media das idades       : %.1f ",media); 
	printf("\n Maior  idade           : %d ",maior);
	printf("\n Menor  idade           : %d ",menor);	
	
}

