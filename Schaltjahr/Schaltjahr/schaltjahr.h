#pragma once
#include <stdio.h>

int schaltjahr()
{

	int jahr;
	int erg;
	printf("Bitte geben sie ein Jahr ein: \n");
	scanf("%i", &jahr);
	erg = jahr % 4 == 0 && (jahr % 100 != 0 || jahr % 400 == 0);
	erg == 1 ? printf("%i ist ein Schaltjahr!\n", jahr) : printf("%i ist kein Schaltjahr!\n", jahr);

	return 0;
}
