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
	
	for(num=1;num!=100;num++)
	{
		numprim=0;
		
		for(cont=2;cont<num;cont++)
		{
			if(num%cont==0)
				numprim=1;		
		}
		if(numprim==0)
			printf("%d e un numero primo\n",num);
	}
	return 0;
}
	
