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
	//ciclo for con numeri diversi da zero
	for(cont=-1;numeri!=0;cont++) //mano a mano diamo un numero in più
	{
		printf("inserisci un numero intero\t");
		scanf("%d",&numeri);
		
		somma= numeri+somma; //calcolo dei numeri insieme alla somma
	}
	
	media= somma/cont; //calcolo della media aritmetica
	printf("la media e'%d",media);

   return 0;//fine programma	
}
