#include <math.h>
#include <stdio.h>

#include "helpers.h"

int main()
{
    double sqrt(double x);
    double x, p;
    x = pobierz_rzeczywista();
    p = sqrt(x);
    if (x >= 0) {
		printf("Pierwiastek z %f = %f \n", x, p);
		    } else {
				printf("Ta liczba jest ujemna!\n");
				    }
    return 0;
}
