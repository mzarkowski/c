#include<stdio.h>

float a, b, x;
void dane(void)
{
printf("Rownanie: a*x=b\n podaj parametry rownania\n");
    printf("a= \n");
    scanf("%f", &a);
    printf("b= \n");
    scanf("%f", &b);
}

void rownanie(void)
{
    x = b / a;
}

void wynik(void)
{
    printf("Wynik rownania %f * x = %f to x = %f \n", a, b, x);
}


