#include<stdio.h>
#include<stdlib.h>
#include"lib.h"

int main()
{
  /* program sprawdza czy prostokaty zawieraja sie w sobie*/
  struct prostokat prost1;
  struct prostokat prost2 ;
  printf("Wypelnij prostokaty dwoma punktami (gorny lewy oraz dolny prawy):\n");
  wypelnij(&prost1);
  wypelnij(&prost2);
  printf("%d\n",sprawdz_prostokat(prost1,prost2));

  
  zawieranie(sprawdz_prostokat(prost1,prost2));
  


    return EXIT_SUCCESS;
}

