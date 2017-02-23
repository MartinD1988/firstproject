#pragma once
#include <stdio.h>

int zeit_io()
{

	unsigned int zeit, tag, std, min, sek;

	printf("Bitte Zeit in Sekunden angeben: ");
	scanf("%u", &zeit);

	sek = zeit % 60;
	min = zeit / 60;  // min /= 60
	std = min / 60;   // std /= 60
	min = min % 60;
	tag = std / 24;
	std = std % 24;

	printf("%u Tag/e, %u Stunde/n, %u Minute/n, %u Sekunde/n\n", tag, std, min, sek);
	





	return 0;
}