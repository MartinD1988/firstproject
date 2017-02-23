// wurf_raten.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

	int wurf, i=0, j=1, k=0;
    int uZahl;

	// wurf = rand(); -> 1-100 , rand -> random

	do
	{

		printf("Bitte raten sie  eine Zahl zwischen 1 und 6: \n");
		scanf("%i", &uZahl);

		srand(time(NULL));
		wurf = rand() % 6 + 1;

		printf("Es wurde eine %i gewuerfelt!\n", wurf);
		printf("Du hast eine %i geraten!\n", uZahl);

		if (wurf == uZahl)
		{
			printf("Du hast die Zahl %i erraten.\n", wurf);
			printf("Du hast dafuer %i versuche gebraucht.\n", j);

			i++;

		}
		else if (uZahl < 1 || uZahl > 6)
		{
			printf("Falsche Eingabe!\n");
			k++;

		}
		
		j++;
		

	} while ( i == 0 || k == 3);
	



    return 0;
}

