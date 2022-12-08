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
	int num;
	int risultato=1;
	
	printf("inserisci un numero intero\t");
	scanf("%d",&num);
	
	for(num;num>=1;num--)
	{
		risultato=risultato*num;
	}
	printf("il risultato e %d\t",risultato);
	
	return 0;
}
	
