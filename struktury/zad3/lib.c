#include<stdio.h>
#include"struct.h"


void ile_prostokatow(int *a){
  printf("Podaj ilosc prostokatow: ");
  scanf("%d",a);
}

int sprawdz_punkt(struct prostokat a, struct punkt b){
  return b.x >= a.lewy_gorny.x && b.x <= a.prawy_dolny.x 
    && b.y <= a.lewy_gorny.y && b.y  >= a.prawy_dolny.y;

}

void  wypelnij(struct prostokat *a){
  scanf("%d",&a->lewy_gorny.x);
  scanf("%d",&a->lewy_gorny.y);  
  scanf("%d",&a->prawy_dolny.x);  
  scanf("%d",&a->prawy_dolny.y);
  
}

void wypelnij_tablice(struct prostokat tab[],int rozmiar){
  int i=0;
  while(i<rozmiar){
    printf("Prostokat nr: %d\n",i+1);
     wypelnij(&tab[i]);
     i++;
  }

}

void wczytaj_punkt(struct punkt *aa){
  printf("Podaj szukany punkt: \n");
  scanf("%d" ,&aa->x);
  scanf("%d",&aa->y);

}

void sprawdzenie(struct punkt xx, struct prostokat tab[],int rozmiar){
  int i=0;
  int blad=0;

  while(i<rozmiar){
    if (sprawdz_punkt(tab[i],xx)==1){
      printf("Punkt zawiera sie w prostokacie nr %d \n",i+1);
      blad=1;
    }
    i++;
  }
  if(blad==0){
  printf("Punkt nie zawiera sie w zadnym prostokacie\n");
  }
 
}
