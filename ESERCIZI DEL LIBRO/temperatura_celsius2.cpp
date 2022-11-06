#include <stdio.h>

int main() {
  int temperatura;  //input
  
  //lettura variabili
  printf("Simone Palacino\n"); 
  printf("scrivi la temperatura con un numero intero\t ");
  scanf("%d",&temperatura);
  
 if(temperatura>30)//confronto le due variabili
 {
	printf("molto caldo");
}
 else
 	if(20<temperatura<30)
 	{
		printf("caldo");
	}
	else
		if(10<temperatura<20)
		{
			printf("ideale");
		}
			else
			{
				printf("freddo");
			}
			
	return 0;//termine del programma
 }
