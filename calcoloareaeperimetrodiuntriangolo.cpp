/*
file: area triangolo e perimetro
autore: Simone Palacino
classe: 3h
data: 26/9/2022

calcolare l'area del triangolo eil suo perimetro conosciendo base e altezza
*/

#include "stdio.h" //printf, scanf
int main()
{ //dichiarare le variabii
	float base,altezza; //input
	float area; //output
	float lato; //input
	float perimetro; //output
	
    //avvalorare input chiedendolo all'utente
	printf("inserisci quanto la base\t");
	scanf("%f",&base);
	printf("inserisci quanto vale l'altezza\t");
	scanf("%f",&altezza);
	printf("inserisci quanto vale il lato\t");
	scanf("%f",&lato);
	
	//elaborazione
	area=base*altezza/2;
	perimetro=lato+lato+lato;
	
	//visualizza output
	printf("il triangolo con base %.2f e altezza %.2f la sua area e' %.2f'", base, altezza, area);
	printf(" e il perimetro del triangolo e' %.2f\t", perimetro);
	
	return 0;
}
