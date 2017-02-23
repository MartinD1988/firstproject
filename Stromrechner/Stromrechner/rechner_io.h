#pragma once
#include <stdio.h>

int rechner_io()

{

	printf("--------------Strom-Rechner----------------\n");

	float volt, ohm, ergA;
	printf("Geben sie die Spannung in Volt an: ");
	scanf("%f", &volt);
	printf("\nGeben sie den Widerstand in Ohm an: ");
	scanf("%f", &ohm);
	ergA = volt / ohm;
	printf("\nEs flie\xE1t ein Strom von %.2f mA bei einer Leistung von %.2f Watt\n", ergA * 1000, volt * ergA);






	return 0;
}