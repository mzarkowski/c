#ifndef __LIB_H__
#define __LIB_H__
#include"struct.h"
void ile_prostokatow(int *a);
int sprawdz_punkt(struct prostokat a, struct punkt b);
void  wypelnij(struct prostokat *a);
void wypelnij_tablice(struct prostokat tab[],int rozmiar);
void wczytaj_punkt(struct punkt *aa);
void sprawdzenie(struct punkt xx, struct prostokat tab[],int rozmiar);
#endif
