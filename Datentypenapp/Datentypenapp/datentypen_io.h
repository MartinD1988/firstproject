#pragma once
#include <stdio.h>

int datentypen_io()
{	
	char zeichen;
	float wert = 0.00;
	int oktal, hexa;

	printf("Geben Sie ein Zeichen ein: ");
	scanf("%c", &zeichen);

	printf("Geben Sie ein Float ein: ");
	scanf("%f", &wert);
	printf("Geben Sie eine Oktalzahl ein: ");
	scanf("%i", &oktal);
	printf("Geben Sie eine Hexadezimalzahl ein: ");
	scanf("%x", &hexa);

	printf("Ihre Eingabe: %c , %.2f , %i , %x\n", zeichen, wert, oktal, hexa);

	printf("Der int Wert des Zeichens %c : %i\n", zeichen, zeichen);
	printf("Die Oktalzahl %i als Hexadezimalzahl : %x\n", oktal, oktal);
	printf("Der Float Wert %.2f mit der Form 00.00 : %2.2f\n", wert, wert);
	

	return 0;
}