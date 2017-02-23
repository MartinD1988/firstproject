// Zylinder_Funktionen.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double pi = 3.1415927;

double fHoehe(double schatten, double winkel)
{
	double turmh = 0.0;
	
	turmh = schatten * tan(winkel * pi / 180);

	return turmh;

}

double fVolumen(double d,double h)
{
	double vol=0.0;

	vol = d * d * h * pi / 4;

	return vol;
}




int main()
{
	double d = 0.0, h = 0.0, schatten = 0.0, winkel = 0.0;

	printf("+++++++++++++Volumen++++++++++++\n\n");

	
	printf("Bitte geben sie den Durchmesser des Zylinders ein: ");
	scanf("%lf", &d);
	printf("Bitte geben sie die Hoehe des Zylinders ein: ");
	scanf("%lf", &h);
	printf("\n");
	
	printf("Das Volumen ist %lf \n\n\n", fVolumen(d,h));
	
	
	printf("+++++++++++++Hoehe++++++++++++++\n\n");

	
	printf("Bitte geben sie die Schattenlaenge ein: ");
	scanf("%lf", &schatten);
	printf("Bitte geben sie den Winkel in Grad ein: ");
	scanf("%lf", &winkel);
	printf("\n");
	
	printf("Die Hoehe des Turms ist %lf\n\n\n", fHoehe(schatten, winkel));
	



    return 0;
}

