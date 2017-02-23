// tictactoe.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()

{
	char matrix[10] = { 1,2,3,4,5,6,7,8,9 };
	int i,j,k=1;
	printf("\n");

	// Zeilenschleife

	for ( i = 0; i < 3; i++)
	{

		// Spaltenschleife

		for ( j = 0; j < 3; j++)
		{

			printf(" %i",k);
			k++;

		}

		printf("\n");
	}







    return 0;
}

