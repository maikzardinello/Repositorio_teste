/*aça um programa que leia um número inteiro N. O programa deve apresentar
todos os números de 1 até 100, substituindo os múltiplos do número informado 
pela palavra “nulo”.
Exemplo:
Número informado: 3.
Saída: 1 2 pi 4 5 pi 7 8 pi 10 11 pi 13 14 pi...*/
#include <stdio.h>
#include <conio.h>

main (void)
{
	int num, i;
	printf ("Informe uma numero: ");
	scanf ("%d", &num);

    for ( i= 1; i<= 100;i++)
    {	
	    if (i % num == 0)     
			printf (" nulo ");
		else
			printf (" %d ",i);
	}			
}
