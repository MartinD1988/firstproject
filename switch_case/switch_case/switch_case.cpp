// switch_case.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{	

	printf("++++auswahl++++\n");
	printf("\n");
	printf("1.\n");
	printf("2.\n");
	printf("3.\n");
	printf("4. ende\n");
	printf("\n");

	int i;
	scanf("%i", &i);
	printf("\n");
	switch (i)
	{
	case 1 : printf("du hast 1 gewaehlt\n"); break;
	case 2: printf("du hast 2 gewaehlt\n"); break;
	case 3: printf("du hast 3 gewaehlt\n"); break;
	case 4: printf("ENDE\n"); break;
	default: printf("du depp!\n"); break;
	}





    return 0;
}

