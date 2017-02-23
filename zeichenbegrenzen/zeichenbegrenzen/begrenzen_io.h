#pragma once
#include <stdio.h>

int begrenzen_io()
{

	unsigned int n = 0;

	printf("Bitte geben sie eine drei stellige Zahl ein: ");

	scanf("%3u", &n);

	n = n % 256; // nur Codes bis 256 zulassen


	printf("Das Zeichen %c\n", n);
	printf("Die Dezimalzahl %u\n", n);
	


	return 0;

}