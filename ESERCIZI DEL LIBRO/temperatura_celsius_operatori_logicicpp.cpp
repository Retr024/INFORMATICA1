#include <stdio.h>
int main ()

{
	int temperatura;
	
	printf("simone palacino");
	printf("inserisci un valore di tipo intero alla temperatura\t ");
	scanf("%d",&temperatura);
	
	if (temperatura>30)
	{ 
		printf("Molto Caldo");
	}
	else 
	{
		if (20>temperatura&&temperatura<30)
		{
			printf("Caldo");
		}
		else
		{
			if (10>temperatura&&temperatura>20)
			{
				printf("Ideale");
			}
			else
			{
				if (0<temperatura&&temperatura<10)
				{
					printf("Freddo");
				}
			
			}
		}
	}
}
