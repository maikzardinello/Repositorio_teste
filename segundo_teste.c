/*Escreva um programa que receba letras informadas pelo usuário até que seja digitada a letra ‘w’.
O programa deve mostrar no final de sua execução quantas das letras digitadas são vogais,
quantas são consoantes e o total de letras digitadas.*/
#include <stdio.h>
#include <conio.h>

main (void){
	int contc = 0, contv = 0, total;
	char letra;
	do 
	{
		printf ("Informe uma letra: ");
		scanf ("%c", &letra);
		fflush(stdin);
			
	if (letra== 'a' || letra== 'e' || letra== 'i' ||  letra == 'o' || letra == 'u') 
	{
		contv++;
	}
	else
	{
		contc++;
	}
		
	} 
	while (letra != 'w' );
		total = contv + contc;
	
	printf ("\n Quantidade de consoantes lidos: %d", contc);
	printf ("\n Quantidade de vogais lidos: %d", contv);
	printf ("\n Total de letras inseridas: %d", total);

	getch();
}
