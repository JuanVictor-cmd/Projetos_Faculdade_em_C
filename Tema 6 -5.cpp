/*Obter um n�mero e imprimir a tabuada de multiplicar, seguindo o seguinte layout: 

Entre com o n�mero: 5 

*** TABUADA DO N�MERO 5 *** 

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
