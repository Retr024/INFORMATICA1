/** ****************************************************************************************
* \mainpage lettura numeri
*
* @brief realizzare un programma che calcola l’area e il perimetro di un trapezio dopo aver letto i dati necessari
* <accetta numeri positivi>
* <specifiche del collaudo>
* 
* @author <simone palacino>
* @date <7/10/2022> 
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h> //printf, scanf
int main()
{ //dichiarare le variabili
	float B,b,l1,l2,h; // input
	float perimetro; //output
	float area; //otput
	
    //avvalorare input chiedendolo all'utente
    printf("simone palacino\n");
	printf("inserisci la base minore:\t");
	scanf("%f",&B);
	printf("inserisci la base maggiore:\t");
	scanf("%f",&b);
	printf("inserisci il primo lato:\t");
	scanf("%f",&l1);
	printf("inserisci il secondo lato:\t");
	scanf("%f",&l2);
	printf("inserisci l'altezza':\t");
	scanf("%f",&h);
	
	perimetro= b+B+l1+l2; //calcolo perimetro
	area= ((B+b)*h)/2; //calcolo area
	
	printf("il perimetro misura %.2f\n", perimetro); //scrittura perimetro
	printf("l'area misura %.2f", area); //scrittura are
	
	// termona il programma
	return 0;
}

