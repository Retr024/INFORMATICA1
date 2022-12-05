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
	int num1;
	int divisore;
	
	printf("inserisci un numero intero\t");
	scanf("%d",&num1);
	
	for(divisore=2;divisore<2;divisore++)
	{
		if(num1%divisore==0)
			printf("il divisore e %d\t",divisore);
	}
		printf("il divisore e %d",divisore);
	return 0;	
}
