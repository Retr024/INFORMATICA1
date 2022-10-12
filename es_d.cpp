/** ****************************************************************************************
* \mainpage lettura numeri
*
* @brief realizzare un programma che Dato un numero inserito dall’utente, compreso tra 100 e 999, stampalo 
in modo che ogni cifra sia separata dalle altre da uno spazio.  >
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
	int  num1, num2, num3; // input
	int numero; //output
	
    //avvalorare input chiedendolo all'utente
    printf("simone palacino\n");
	printf("inserisci un numero compreso tra 100 e 999:\t");
	scanf("%d", &numero);
	
	num1= numero/100;
	num2= (numero-num1+100)/10;
	num3= (numero-(num1*100+num2*10));
	
	printf("%d\t%d\t%d\t", num1, num2, num3); //scrittura risultato
	
	// termona il programma
	return 0;
}

