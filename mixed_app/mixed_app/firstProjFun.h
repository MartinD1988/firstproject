#pragma once


int fScan(void) {

	int dpi = 0, farbtiefe = 0;
	float  breite = 0, hoehe = 0;
	double groesse = 0.00;
	printf("Bitte geben sie die DPI ein: ");
	scanf("%i", &dpi);
	printf("\n");
	printf("Bitte geben sie die Farbtiefe ein: ");
	scanf("%i", &farbtiefe);
	printf("\n");
	printf("Bitte geben sie die Breite ein: ");
	scanf("%f", &breite);
	printf("\n");
	printf("Bitte geben sie die Hoehe ein: ");
	scanf("%f", &hoehe);
	printf("\n");

	groesse = ((((breite * dpi) / 2.54) * (hoehe * dpi) / 2.54) * farbtiefe)/8/1024/1024;

	printf("Die zu erwartende Dateig\x94\xE1\e entspricht %.4lf MIB\n",groesse);





	return 0;
}


int fKinder(void) {


	int kinder = 0, eier = 0, rest = 0, erhalten = 0;

	printf("Willkommen zum Kindergeburtstag\n");

	printf("Wie viele Kinder?");

	scanf("%i", &kinder);

	printf("\nWie viele \x9a\x62\erraschungseier hast du, ich hoffe mehr als Kinder\nsonst gibt es Streit");

	scanf("%i", &eier);

	erhalten = eier / kinder;

	rest = eier % kinder;

	printf("\nEs wurden %i Kinder eingeladen und jedes hat %i \x9a\x62\erraschungseier erhalten\n"
		"Es blieben noch %i \x81\x62rig\n", kinder, erhalten, rest);



	return 0;
}




