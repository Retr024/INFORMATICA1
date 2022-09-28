/*
file: media dei numeri
autore: Simone Palacino
classe: 3h
data: 26/9/2022

fare la media di tre numeri decimali
*/

#include "stdio.h" //printf, scanf
int main()
{ 
    //dichiarare le variabili in unput
    
    float voto1,voto2,voto3;
    
    float media;
    
    printf("inserisci il primo voto \n");
    scanf("%f",&voto1);
    printf("inserisci il secondo voto \n");  
	scanf("%f",&voto2); 
	printf("inserisci il terzo voto \n");
	scanf("%f",&voto3); 
	
	//elaborazione
	media=(voto1+voto2+voto3)/3;
	
	//scriviamo l'output
	printf("la media dei tre voto e' %.2f ", media);
	
	return 0;
}
	
	
	
	
