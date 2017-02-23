#pragma once
#include <stdio.h>

int gericht_io()
{

	unsigned int alter = 0;


	printf("Alter angeben: ");
	scanf("%i", &alter);

	if ( alter <= 21 && alter >= 18)
	{
		printf("\nHeranwachsender\n");

	}
		else if (alter >= 14 && alter < 18)
			{
				printf("\nJugendlich\n");

			}
		else if (alter < 14)
		{
			printf("\nKind\n");
		}
		else
		{
			printf("\nErwachsen\n");
		}



	return 0;
}