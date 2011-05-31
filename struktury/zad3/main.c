#include<stdio.h>
#include<stdlib.h>
#include"lib.h"

int main()
{
  int n;
  struct punkt xx;
  ile_prostokatow(&n);
  struct prostokat tab[n];
  wypelnij_tablice(tab,n);
  wczytaj_punkt(&xx);
  
  sprawdzenie(xx,tab,n);


    return EXIT_SUCCESS;
}

