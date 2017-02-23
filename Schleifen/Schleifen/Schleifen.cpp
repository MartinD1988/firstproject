// Schleifen.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{	
	// for schleife ( kann nur kopfgesteuert sein)

	for (int i = 0; i < 10; i++)
	{
		printf("schleifendurchlauf %i\n", i);

	}

	printf("\n");
	// While schleife ( hat keinen startwert, deklaration erfolgt außerhalb der schleife, hat kein Inkrement)

	int j = 0;
	
	while (j < 10)
	{	
		printf("schleifendurchlauf %i\n", j);
		j++;
	}

	printf("\n");
	// do while schleife

	int k = 0;

	do
	{
		printf("schleifendurchlauf %i\n", k);
		k++;

	} while (k < 10);




	  

		// do while passwort beispiel

		char passwort[10] = " ";
		char user[10] = " ";
		int i = 0;

		do {
			
			printf("\nName\n");
			scanf("%s", &user);
			
			printf("\nPasswort\n");
			scanf("%s", &passwort);
			
			i++;

		} while ((passwort != "Hans" && user != "Hans") && i < 2);
		




		return 0;

}

