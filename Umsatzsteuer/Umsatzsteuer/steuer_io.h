#pragma once
#include <stdio.h>


int steuer_io()
{

	float preis = 0.00, erg = 0.00;
	char a ;

	printf("\nUmsatzsteuer (L)ebensmittel (K)leidung :");
	scanf("%c", &a);
	printf("Bitte Preis eingeben: ");
	scanf("%f", &preis);
	



	if (a == 'L' || a == 'l' )  
	{
		erg = preis * 1.19 ;
		printf("\nDer Preis %.2f plus Umsatzsteuer fuer Lebensmittel 19 Prozent ist: %.2f\n", preis, erg);

	}
	else if (a == 'K' || a == 'k')  
	{
		erg = preis * 1.07;
		printf("\nDer Preis %.2f plus Umsatzsteuer fuer Kleidung 7 Prozent ist: %.2f\n", preis, erg);
		
	}
	else
	{
		printf("\nFalsche Eingabe!\n");
	}

	
	return 0;
}