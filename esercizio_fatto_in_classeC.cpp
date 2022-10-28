/*
file: due numeri interi
autore: Simone Palacino
classe: 3h
data: 05/10/2022

input:due numeri interi
elaborazione: resto divisione tra due numeri interi
output: resto
*/

#include <stdio.h> //printf, scanf
int main()
{
	//dichiarare le variabili input
	float prezzo;
	//e output
	
	printf("inserisci il prezzo del prodotto\t");
	scanf("%f",&prezzo);
	
	if(prezzo>100)
		{
		prezzo=(prezzo/100)*90;
		printf("il prezzo finale e' %.2f",prezzo);
		}	
	 	else if(prezzo>50)
		{
			prezzo=(prezzo/100)*95;
			printf("il prezzo finale e'%.2f",prezzo);
		}
	
	return 0;
}
