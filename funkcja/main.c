#include <stdio.h>
#include "funkcja.h"

int main() {
  float aa, bb, xx;

  dane(&aa, &bb);
  // printf("Wczytano aa = %f, bb = %f\n", aa, bb);
  rownanie(aa, bb, &xx);
  // printf("Wyliczono xx = %f\n", xx);
  wynik(aa, bb, xx);
  return 0;
}
