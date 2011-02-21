#include <stdio.h>
#include <math.h>
 
int main() {
  float pierwiastek, poczatek, koniec, krok, temp;
  printf("Podaj wartość początkową, konćową oraz krok do argumentu : ");
  scanf("%f %f %f", &poczatek, &koniec, &krok);

  if (poczatek > koniec) {
	    temp = poczatek;
	    poczatek = koniec;
	    koniec = temp;
	  }
  if(krok < 0) krok *= -1.0;

  while(poczatek <= koniec){
	    if(poczatek < 0) {
			      printf(" %.4f brak\n", poczatek);
			    }else {

						pierwiastek = sqrt(poczatek);
					      printf(" %.4f %.4f\n", poczatek, pierwiastek);
					    }
	   
	    poczatek = poczatek + krok ;
	  }

  return 0;
}
