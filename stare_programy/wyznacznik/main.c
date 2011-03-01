#include<stdio.h>
#include<stdlib.h>
#include"definicje.h"

int main()
{
  int n;
  printf("Podaj wymiar macierzy kwadratowej: ");
  scanf("%d",&n);
  float macierz[n][n];
  wczytaj_dane(n,macierz);

/* drukowanie wyznacznika macierzy*/

    printf("%f", wyznacznik(n, macierz));
    printf("\n");
    return 0;
}


