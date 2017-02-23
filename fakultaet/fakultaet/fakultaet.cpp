// fakultaet.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
  
	int i;
	long int zahl = 1, fak = 1;
	printf("Bitte die Zahl eingeben, deren Fakultaet berechnet werden soll :");
	scanf("%d", &i);
	printf("Fakultaet von %d\n", i);
	while (zahl <= i) {
		fak = fak*zahl;
		printf("%d*", zahl++);
	}
	printf("\b = %d\n", fak);

	
	
	
	
	
	return 0;
}

