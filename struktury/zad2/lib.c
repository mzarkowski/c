#include<stdio.h>
#include"struct.h"

int sprawdz_punkt(struct prostokat a, struct punkt b){
  return b.x >= a.lewy_gorny.x && b.x <= a.prawy_dolny.x 
    && b.y <= a.lewy_gorny.y && b.y  >= a.prawy_dolny.y;

}

int sprawdz_prostokat(struct prostokat a, struct prostokat b){
  int licznik_punktow=0;
  if(  sprawdz_punkt(a,b.lewy_gorny)==0){
    licznik_punktow++;
  }
  if(sprawdz_punkt(a,b.prawy_dolny)==0){
    licznik_punktow++;
    }
  return licznik_punktow;

}

void  wypelnij(struct prostokat *a){
  scanf("%d",&a->lewy_gorny.x);
  scanf("%d",&a->lewy_gorny.y);  
  scanf("%d",&a->prawy_dolny.x);  
  scanf("%d",&a->prawy_dolny.y);
  
}

void zawieranie(int a){
  if(a<=1){
    printf("Prostokaty nie sa rozlaczne \n");
  }
  else {
    printf("Prostokaty sa rozlaczne\n");
  }
}
