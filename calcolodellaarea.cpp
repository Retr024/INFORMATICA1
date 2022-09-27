/*
file: area triangolo
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
	
    //avvalorare input chiedendolo all'utente
	printf("inserisci la base \n");
	scanf("%f, &base");
	printf("inserisci l'altezza\n");
	scanf("%f",&altezza);
	
	//elaborazione
	area=base*altezza/2;
	
	//visualizza output
	printf=("area triangolo con base %f e altezza %f e' %f'",base,altezza,area);
	
	return 0;
}
