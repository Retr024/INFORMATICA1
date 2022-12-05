/*
file: due numeri interi
autore: Simone Palacino
classe: 3h
data: 05/10/2022
input:due numeri interi
elaborazione: somma 15
output: resto
*/

#include <stdio.h> //printf, scanf
int main()
{
	int numeri=1;
	int somma=0;
	int media;
	int cont;
	
	for(cont=0;numeri!=0;cont++)
	{
		printf("inserisci un numero intero\t");
		scanf("%d",&numeri);
		
		somma= numeri+somma;
	}
	
	media= somma/cont;
	printf("la media e'%d",media);

   return 0;	
}
