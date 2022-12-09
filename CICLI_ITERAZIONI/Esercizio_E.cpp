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
	//inizio cliclo for
	for(num;num>=1;num--)//diamo una condizione a num e che ogni calcolo svolto di diminuire
	{
		risultato=risultato*num;//scriviamo la formula per calcolare il fattoriale
	}
	printf("il risultato e %d\t",risultato);//printf finale con il risultato
	//fine programma
	return 0;
}
	
