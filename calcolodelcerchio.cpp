/*
file: 
autore: Simone Palacino
classe: 3h
data: 21/9/2022

conosciendo il reggio calcolare l'area e la circonferenza

input: raggio
Elaborazione: calcola la circonferenza e l'area
output: valore della circonferenza  l'area
*/

#include "stdio.h" //printf, scanf
#define P_GRECO 3.14
int main()
 { 
	float raggio;
	float area, circonferenza;
	
	printf("inserire quanto vale il raggio\t");
	scanf("%f",&raggio);
	
	area=(raggio*raggio)*P_GRECO;
	circonferenza=(2*P_GRECO)*raggio;
	
	printf("il valore del cerchio e' %.2f\n", area);
	printf("il valore della circonferenza e' %.2f\n", circonferenza);
	
	return 0;
}
