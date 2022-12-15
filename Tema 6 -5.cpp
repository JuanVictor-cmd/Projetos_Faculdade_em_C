/*Obter um número e imprimir a tabuada de multiplicar, seguindo o seguinte layout: 

Entre com o número: 5 

*** TABUADA DO NÚMERO 5 *** 

5 x 1 = 5 

5 x 2 = 10 

... 

5 x 10 = 50*/
#include <stdio.h>
main()
{
	int numero, cont=0;

    printf("\n Digite um numero: ");
    
    scanf("%d",&numero);
    
	printf("\n ----- Tabuada do numero %d -----", numero);
	
    for (cont=0; cont<=10 ; cont++)
	{
        printf("\n %d x %d = %d ",numero,cont,numero*cont);
    }

}
