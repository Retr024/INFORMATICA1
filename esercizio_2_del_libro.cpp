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
	printf ("inserisci un valore ad a \t");
	scanf ("%d,",&a);
	printf("inserisci un valore ad b \t");
	scanf("%d",&b);
	
	if((a/b)>3)
	{
		c=-1*a;
	}
	else
	{
		c=b-a;
	}
	 
	printf("il riaultato e' %d",c);
	
	return 0;
}
