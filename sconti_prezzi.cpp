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
	float prezzo_totale;
	//e output
	
	printf("Simone Palacino");
	printf("inserisci il prezzo del prodotto\t");
	scanf("%f",&prezzo_totale);
	
	if(prezzo_totale<50)
		{
		    prezzo_totale=(prezzo_totale/100)*95;
			printf("il prezzo finale e' %.2f",prezzo_totale);
		}	
	 	if(prezzo_totale<65)
		{
			prezzo_totale=(prezzo_totale/100)*94;
			printf("il prezzo finale e'%.2f",prezzo_totale);
		}
		if(prezzo_totale<80)
		{
			prezzo_totale=(prezzo_totale/100)*93;
			printf("il prezzo finale e'%.2f",prezzo_totale);	
		}
		else(prezzo_totale>80)
		{
			prezzo_totale=(prezzo_totale/100)*90;
			printf("il prezzo finale e'%.2f",prezzo_totale);
		}
	
	return 0;
}
