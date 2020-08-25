/*Escreva um programa que receba um número inteiro e calcule seu fatorial e mostre o resultado.
O programa deve mostrar uma mensagem de erro caso seja informado um número negativo.
Tratar o fatorial de zero (0! = 1).*/
#include <stdio.h>

int main()
{
	int fat, n;
	printf("Insira um valor para o qual deseja calcular seu fatorial: ");
	scanf("%d", &n);
 	if (n>0)
	{ 		
		for(fat = 1; n > 1; n = n - 1)
		fat = fat * n;
		printf("\n o Fatorial calculado eh: %d", fat);
	} 
 	else if (n==0)
	{
		printf("\n o Fatorial calculado eh: 1 ");
	}
	else if(n<0)
	{
		printf("que pena, vc digitou um numero negativo, tente outra vez. ");	
	}

	return 0;
}
