/*Solicitar várias idades e informar:
a. Quantidade de idosos (ID >= 65)
b. Quantidade de eleitores (ID >= 16)
c. Soma das idades da pessoas aptas a dirigir (ID >= 18)
Para de solicitar dados quando idade igual 0.*/
#include<stdio.h>

main()
{
	int idade, idosos=0, eleitores=0, soma=0;
	
	printf("\n Digite sua idade: ");
	
	scanf("%d", &idade);
	
	while(idade!=0)
	{
		if(idade>=65)
		idosos++;
		if(idade>=16)
		eleitores++;
		if(idade>=18)
		soma=soma+idade;
		
		printf("\n Digite sua idade: ");
	
		scanf("%d", &idade);
	 }
	printf("\n Quantidade de idosos: %d", idosos);
	printf("\n Quantidade de eleitores: %d", eleitores);
	printf("\n Pessoas aptas a dirigir: %d", soma);
}
