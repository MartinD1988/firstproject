// wenn_dann_sonst.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>



/// kind < 14     jugendlicher < 18       heranwachsender < 21      erwachsen < 60    alt < 80    ganz alt  < 100


int main()
{		

	int alter = 101;

	
	if (alter < 14)
	
		{	
			printf("Kind\n");
			
		}
	else if(alter < 18 )
		{
		printf("Jugendlich\n");
		}
	else if ( alter < 21 )
		{
			printf("Heranwachsend\n");
		}
	else if (alter < 60)
	{
		printf("Erwachsen\n");
	}
	else if (alter < 80)
	{
		printf("Alt\n");
	}
	else if (alter < 100)
	{
		printf("ganz alt\n");
	}
	else 
	{
		printf("Weise\n");
	}

	

    return 0;
}

