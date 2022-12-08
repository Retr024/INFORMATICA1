/*
file: due numeri interi
autore: Simone Palacino
lezione: 3h
dati: 05/10/2022
input:due numeri interi
elaborazione: resto divisione tra due numeri interi
uscita: resto
*/

# include <stdio.h>  
# include <math.h>
int main()
{
	int num1;
	int risultato;
	int molt=7;
	
	printf ("inserisci 8 bit uno alla volta\n");
	
	do
	{
		scanf("%d",&num1);
		risultato=risultato+pow(2,molt)*num1;
		molt--;
	}
	
	while(molt>-1);
	
		printf("il numero in decimale e\t %d",risultato);
	
	return 0;
}
