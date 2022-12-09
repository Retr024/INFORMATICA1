/*
file: due numeri interi
autore: Simone Palacino
classe: 3h
data: 05/10/2022
input:due numeri interi
elaborazione: somma 15
output: resto
*/

#include <stdio.h> //printf, scanf
int main()
{
	int num;
	int cont;
	int numprim;
	//ciclo for inizio
	for(num=1;num!=100;num++)//diamo un valore ad 1 e una condizione a num
	{
		numprim=0;//diamo un valore a numprim
		
		for(cont=2;cont<num;cont++)//diamo un valore a cont e una condizione sempre a cont
		{
			if(num%cont==0)//visualizziamo il resto con la % che equivale a 0
				numprim=1;		
		}
		if(numprim==0)//diciamo a numprim di essere uguale a 0
			printf("%d e un numero primo\n",num);
	}
	return 0;
}
	
