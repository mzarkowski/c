#include <stdio.h>

int main() {
  int tab[3], i, suma=0, iloczyn=1, min, max;
  printf("Wprowadź 3 liczby całkowite oddzielone spacją: ");
  scanf("%i %i %i", &tab[0], &tab[1], &tab[2]);

	min = max = tab[0];

  for(i=0;i<3;i++){
		if(max<tab[i]) max = tab[i];
		if(min>tab[i]) min = tab[i];
		suma = suma + tab[i];
		iloczyn = iloczyn * tab[i];
	}


  printf("\nSuma wynosi: %i\n", suma);
  printf("Iloczyn wynosi: %i\n", iloczyn);
  printf("Najmniejsza liczba to: %i\n", min);
  printf("Największa liczba to: %i\n", max);
  return 0;
}


