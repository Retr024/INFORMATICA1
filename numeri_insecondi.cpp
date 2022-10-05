/*
file: numero secondi
autore: Simone Palacino
classe: 3h
data: 05/10/2022
leggere un valore corrispondente a un numero in scondi che viene trasformato in ssecondi,minuti,ore
*/

#include <stdio.h> //printf, scanf
int main()
{
	//dichiarare le variabili input
	int secondi;
	//e output
	int ore, minuti;
 
	//input: un numero
	printf("insrisci un numero di secondi");
	scanf("%d", &secondi);
	
	minuti=(secondi-secondi %60)/60; //calcolo dei minuti totali
	ore=(minuti-minuti %60)/60;	//calcolo delle ore totali
	secondi= secondi %60;
	minuti= minuti %60;
	
	//output
	printf("ore: %d, minuti: %d,, secondi: %d", ore, minuti, secondi); //stampa de risultato
	
	return 0;
}
	
	
	
