// spruenge.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{

	 printf("------break---------\n");

	for (int i = 0; i < 10; i++)
	{
		if (i == 5) { break; }
		printf("%i\n", i);
	}



	printf("-------continue-------\n");

	for (int i = 0; i < 10; i++)
	{

		if (i == 5) { continue; }
		printf("%i\n", i);

	}
	


	

    return 0;
}

