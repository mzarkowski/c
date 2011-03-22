#include <stdio.h>
#include "funkcja.h"

int main()
{

    double a, b;
    printf("Podaj Liczbe a : ");
    scanf("%lf", &a);
    printf("\nPodaj Liczbe b : ");
    scanf("%lf", &b);

    liniowa(a, b);
    return 0;
}
