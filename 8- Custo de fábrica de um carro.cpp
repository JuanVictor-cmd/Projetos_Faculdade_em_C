/*O custo ao consumidor, de um carro novo, � a soma do custo de f�brica com a percentagem do distribuidor
e dos impostos (aplicados ao custo de f�brica).Supondo que a porcentagem do distribuidor seja de 28% e os
impostos de 45%, escrever um programa para ler o custo de f�brica de um carro e escrever o custo ao consumidor.*/

#include<stdio.h>

main()
{

	float carro, novocarro;
	
	printf("\n Qual o custo de fabrica ? ");
	
	scanf("%f", &carro);
	
	novocarro=carro+(carro*28/100)+(carro*45/100);
	
	printf("\n O valor do seu carro= R$ %.2f", novocarro);

}
