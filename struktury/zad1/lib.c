#include<stdio.h>
#include"struct.h"

int sprawdz_punkt(struct prostokat a, struct punkt b){
  return b.x >= a.lewy_gorny.x && b.x <= a.prawy_dolny.x 
    && b.y <= a.lewy_gorny.y && b.y  >= a.prawy_dolny.y;

}

int sprawdz_prostokat(struct prostokat a, struct prostokat b){

  return (sprawdz_punkt(a,b.lewy_gorny)) && (sprawdz_punkt(a,b.prawy_dolny));


}

void  wypelnij(struct prostokat *a){
  scanf("%d",&a->lewy_gorny.x);
  scanf("%d",&a->lewy_gorny.y);  
  scanf("%d",&a->prawy_dolny.x);  
  scanf("%d",&a->prawy_dolny.y);
  
}

void zawieranie(int a){
  if(a==1){
    printf("Prostokaty zawieraja sie w sobie \n");
  }
  else {
    printf("Prostokaty nie zawieraja sie w sobie\n");
  }
}
