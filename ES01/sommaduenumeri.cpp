/*
file: somma interi
autore: Simone Palacino
classe: 3h
data: 21/9/2022

somma di due nemuri interi letti da tasiera e stampa 
a schermo del risultato

input: due numeri interi
Elaborazione: somma
*/

#include "stdio.h" //printf, scanf
int main() 
{ 
    //dichiariamo le due variabii input
    int num1, num2;
    //e output
    int ris;
    
    //input: due numeri interi
    printf("inserisci il primo numero ");
    scanf("%d", &num1);
    printf("inserisci il secondo numero ");
    scanf("%d", &num2);
    
    //elaborazione:somma
    //assegnamo alla variabile ris 
    //il risultato della espressione num1 + num2
    ris= num1 + num2; 
    
    //output: un numero intero
      printf("la somma dei due numeri  e' &%d",ris);
      //terminiamo il programma
      return 0;
}
