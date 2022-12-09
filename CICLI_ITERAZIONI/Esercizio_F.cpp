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
	//inizio ciclo con do e while con scanf al suo interno
	do
	{
		scanf("%d",&num1);
		risultato=risultato+pow(2,molt)*num1;//formula per trasformare un numero da*
		molt--;                              //*8bit in decimale
	}
	
	while(molt>-1);
	
		printf("il numero in decimale e\t %d",risultato);//printf finale
	//fine programma
	return 0;
}
