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
	int a,b,c;
	//e output
	int max,min;
	
	printf("simone palacino \n");
	printf ("inserisci un primo numero intero \t");
	scanf ("%d,",&a);
	printf("inserisci un secondo numero intero \t");
	scanf("%d",&b);
	printf("inserisci un terzo numero intero \t");
	scanf("%d",&c);
	
	max=a;
	min=a;
	
	if(b>max)
	max=b;
	if(b<min)
	min=b;
	if(c>max)
	max=c;
	if(c<min)
	min=c;
	
	printf("%d e'il piu' grande\t",max);
	printf("%d e il piu' piccolo\t",min);
	return 0;
}
