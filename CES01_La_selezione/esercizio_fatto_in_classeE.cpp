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
	int l1,l2,l3;
	//e output
	
	printf("simone palacino \n");
	printf ("inserisci il primo lato \t");
	scanf ("%d,",&l1);
	printf("inserisci il secondo lato\t");
	scanf ("%d,",&l2);
	printf("inserisci il terzo lato \t");
	scanf ("%d,",&l3);
	
	if(l1==l2)
	{
		if(l2==l3)
		{
			printf("il triangolo e' equilatero");
		}
		else
		{
			printf("il triangolo e' isoscele");
		}
	}
	else
	{
		if(l1==l3)
		{
			printf("il triangolo e' isoscele");
		}
		else
		{
			if(l2==l3)
			{
				printf("il triangolo e' isoscele");
			}
			else
			{
				printf("il triangolo e' scaleno");
			}
		}
	}
		
	return 0;
}
