/** ****************************************************************************************
* \mainpage c_spesa.c
*
* @author Conti Gallenti Matias
* @date 06/11/2022
*/

#include <stdio.h>

int main() 
{
	int kg;//input
	
	printf("Inserisci in un numero intero i kg di patate\t");//lettura variabili
	scanf("%d", &kg);
	
	if (kg<=5)
		{
			printf("serve un sacchetto");
		}
		else if (kg<=10)
			{
				printf("servono due sacchetti");
			}
			else if (kg<=30)
				{
					printf("va bene una cassetta");
				}
				else if (kg<=60)
					{
						printf("vanno bene due cassette");
					}
					else if (kg>61)
						printf("il numero che hai inserito non e' corretto");
	
	return 0;
}
