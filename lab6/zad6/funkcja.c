#include <stdio.h>

void wczytaj(float tab[6])
{
    int i;
    printf("Podaj 6 liczb rzeczywistych\n");
    for (i = 1; i <= 6; i++) {
		printf("Podaj wartosc nr %i: \n", i);
		scanf("%f", &tab[i - 1]);
		    }
}

void posortuj(float tab[6])
{
    int i, j;
    float pom;

    for (i = 0; i < 6; i++) {
		j = i;
		while (j > 0 && tab[j] < tab[j - 1]) {
		pom = tab[j];
		tab[j] = tab[j - 1];
		tab[j - 1] = pom;
		j--;
		}
		    }
}

void wyszukaj(float tab[6])
{
    printf("Wartosc maksymalna to %f \n Wartosc minimalna to: %f \n", tab[5], tab[0]);
}
