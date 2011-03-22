#include <stdio.h>

void dane(float *a, float *b) {
  printf("Rownanie: a*x=b\n podaj parametry rownania\n");
  printf("a b = ");
  scanf("%f %f", a, b);
}

void rownanie(float a, float b, float *x) {
  *x = b / a;
}

void wynik(float a, float b, float x)
{
   printf("Wynik rownania %f * x = %f to x = %f \n", a, b, x); 
}
