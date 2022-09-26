/*
file: 
autore: Simone Palacino
classe: 3h
data: 26/9/2022

calcolare l'area del triangolo conosciendo base e altezza
*/

#include "stdio.h" //printf, scanf
int main()
{ //dichiarare le variabii
	float base,altezza; //input
	float area; //output

	printf("inserisci la base");
	scanf("%f, &base");
	printf("inserisci l'altezza");
	scanf("%f, &altezza");
	area=base*altezza/2;
	//visualizza output
	printf=("area triangolo=/t%f",area);
}
