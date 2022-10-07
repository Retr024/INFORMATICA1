/** ****************************************************************************************
* \mainpage lettura numeri
*
* @brief realizzare un programma che visualizzi in ingresso 4 numeri che soo i coefficenti di un 
polinomio -ax^3 +bx^2 - c^x + d e valuta il suo valore in un punto x, sempre inserito dall’utente.
* <accetta numeri positivi>
* <specifiche del collaudo>
* 
* @author <simone palacino>
* @date <7/10/2022> 
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h> //printf, scanf
#include <math.h>
int main()
{ //dichiarare le variabii
	float a, b, c, d, x;// input
	float risultato; //output
	
    //avvalorare input chiedendolo all'utente
    printf("simone palacino\n");
	printf("inserisci il numero a:\t");
	scanf("%f",&a);
	printf("inserisci il numero b:\t");
	scanf("%f",&b);
	printf("inserisci il numero c:\t");
	scanf("%f",&c);
	printf("inserisci il numero d:\t");
	scanf("%f",&d);
	printf("inserisci il numero x:\t");
	scanf("%f",&x);
	
	risultato= (-a*(pow(x,3))+b*(pow(x,2))-c*x+d); //calcolo del risultato
	printf("il risultato e'%.2f", risultato);
	
	// termona il programma
	return 0;
}

