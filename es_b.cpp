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
	int num1, num2;
	//e output
	int resto;
 
	//input: due numeri interi
	printf("inserisci il primo numero intero\t");
	scanf("%d", &num1);
	printf("inserisci il secondo numero intero\t");
	scanf("%d", &num2);
	 
	resto= num1%num2; //calcolo del resto
	
	// output
	printf("il risultato è %d", resto);// stampa il risultato
	
	//termine del programma
	return 0;
}
