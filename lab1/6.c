#include <stdio.h>
#include <math.h>

int main() {

  float liczba, pierwiastek;
	printf("Podaj liczbę z której chcesz obliczyć pierwiastek: ");
  scanf("%f", &liczba);
  if (liczba < 0) {
	    printf("Podana liczba nie ma pierwiastka rzeczywistego.\n");
	  }
	else{
 pierwiastek=sqrt(liczba);
  printf("Pierwiastek z liczby %2f wynosi %2f\n", liczba, pierwiastek);
	}
	return 0;
}
