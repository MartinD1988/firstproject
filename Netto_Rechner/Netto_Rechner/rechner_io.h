#pragma once
#include <stdio.h>



int rechner_io()
{



	printf("+++++++++++++Netto-Brutto-Rechner++++++++++++++\n");

	float brutto, mwst, netto;
	printf("Bitte geben Sie den Brutto Betrag ein: ");
	scanf("%f", &brutto);
	printf("Bitte geben Sie den Mwst-Satz ein: ");
	scanf("%f", &mwst);
	netto = brutto * (100/(100+mwst));
	printf("Brutto: %.2f\n", brutto);
	printf("Mwst  : %.2f\n", mwst);
	printf("Netto : %.2f\n", netto);
	










return 0;
}