#pragma once

#include <stdio.h>



int quader_io()
{

	printf("++++++++++++++++Quader-Volumen++++++++++++++++++\n");

	float laenge, breite, hoehe;
	
	printf("Eingabe der Laenge [cm]: ");
	scanf("%f", &laenge);
	printf("Eingabe der Breite [cm]: ");
	scanf("%f", &breite);
	printf("Eingabe der Hoehe [cm]: ");
	scanf("%f", &hoehe);
	printf("Das Volumen des Quaders betraegt %.2f ccm\n", laenge*breite*hoehe);
	



	return 0;
}



