#include <stdio.h>
#include <stdlib.h>


void oblicz_koszt(unsigned int km, double litr, double koszt)
{
    double s;
    s = (litr / (km / 100)) * koszt;
    printf("Koszt przejechania 100 km wynosi %lfzl \n", s);
}

void zuzycie(unsigned int km, double litr, double koszt)
{
    double s;
    s = (litr / (km / 100));
    printf("Srednie zuzycie paliwa na 100km wynosi %lfL \n", s);
}

void tankowanie(unsigned int ui, double x, double y, int i)
{
    printf("\nTaknowanie nr %i. \n", i);
    zuzycie(ui, x, y);
    oblicz_koszt(ui, x, y);
}

void podsumowanie(unsigned int km, double litr, double koszt, double cena, int i)
{
    printf("\nOgolem \n");
    printf("Przejechano %u km \nZuzyto %lf litrow paliwa \nKoszt calkowity wynosi %lfPLN \n", km, litr, koszt);
    zuzycie(km, litr, koszt);
    oblicz_koszt(km, litr, cena / i);
}
void wykonaj(FILE ** in_handle)
{
    unsigned int ui, km = 0;
    double x, y, litr = 0, koszt = 0, cena = 0;
    char bufor[BUFSIZ];
    int kom, i = 0;

    if (*in_handle != NULL) {
		
		        while (fgets(bufor, BUFSIZ, *in_handle) != NULL) {
						
						            kom = sscanf(bufor, "%u %lf %lf", &ui, &x, &y);
						            if (kom == 3) {
												                i++;
												                cena += y;
												                km += ui;
												                litr += x;
												                koszt += (x * y);
												                tankowanie(ui, x, y, i);
												            }
						        }
		        fclose(*in_handle);
		        podsumowanie(km, litr, koszt, cena, i);
		    }
}


