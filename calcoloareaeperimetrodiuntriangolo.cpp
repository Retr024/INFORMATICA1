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
	float base;
	float altezza; //input
	float area; //output
	float latoobliquo; //input
	float perimetro; //output
	
    //avvalorare input chiedendolo all'utente
	printf("inserisci quanto vale il lato obliquo\t");
	scanf("%f",&latoobliquo);
	printf("inserisci quanto vale l'altezza\t");
	scanf("%f",&altezza);
	printf("inserisci quanto vale la base\t");
	scanf("%f",&base);
	
	//elaborazione
	area=(latoobliquo*altezza)/2;
	perimetro=latoobliquo+latoobliquo+base;
	
	//visualizza output
	printf("il triangolo con i lati obliqui di %.2f e l'altezza di %.2f quindi la sua area e' %.2f'", latoobliquo, altezza, area);
	printf(" e il perimetro del triangolo e' %.2f\t", perimetro);
	
	return 0;
}
