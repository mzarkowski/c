#include<stdio.h>

void wczytaj(int *w, int *s)
{
    printf("Podaj wysokosc szachownicy: \n");
    scanf("%i", w);
    printf("Podaj szerokosc szachownicy: \n");
    scanf("%i", s);
}


void rysuj(int j, int k)
{
    int i, x;
    x = j * k;
    for (i = 1; i <= x; i++) {
		printf("*");
		if (i % k == 0 && i % (2 * k) != 0) {
		printf("\n ");
		} else if (i % (2 * k) == 0) {
		printf("\n");
		} else {
		printf(" ");
		}
		    }
}
