#include <stdio.h>

void liniowa(double a, double b)
{

    double zerowe;

    if (a == 0) {
		
		if (b == 0)
		printf
		("\nKażdy liczba rzeczywista jest miejscem zerowym funkcji\n");
		if (b != 0)
		printf
		("\nWykres nie ma miejsca zerowego, dla każdego x wartość wynosi %.4lf\n", b);
		
		    } else {
				
				zerowe = (b / a) * (-1);
				printf("\nMiejsce zerowe wynosi %.4lf\n", zerowe);
				
				    }



}
