/*
file: due numeri interi
autore: Simone Palacino
classe: 3h
data: 05/10/2022

input:due numeri interi
elaborazione: resto divisione tra due numeri interi
output: resto
*/

#include <stdio.h> //printf, scanf
int main()
{
	//dichiarare le variabili input
	int a,b;
	//e output
	int c;
	
	printf("simone palacino \n");
	printf ("inserisci un numero intero \t");
	scanf ("%d,",&a);
	printf("inserisci un numero intero \t");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("%d e' maggiore di %d",a,b);
	}
	if(a<b)
	{
		printf(" %d e' minore di %d",a,b);
	}
	
	return 0;
}
