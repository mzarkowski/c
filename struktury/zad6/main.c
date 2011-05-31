#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<ctype.h>

#include<locale.h>

#include<wctype.h>
#include<wchar.h>


struct wierzcholek{
  wchar_t *slowo;
  int liczba_wystapien;
  struct wierzcholek *lewe_poddrzewo;
  struct wierzcholek *prawe_poddrzewo;
};

struct wierzcholek *nowy_wierzcholek(wchar_t *s){
  struct wierzcholek *w = malloc(sizeof(struct wierzcholek));
  if(w==NULL){
    fprintf(stderr,"!blad pamieci");
    exit(1);
  }
    w->slowo=wcsdup(s);
  
  if(w->slowo==NULL){
    fprintf(stderr,"blad pamieci");
    exit(1);
  }
    w->liczba_wystapien=1;
    w->lewe_poddrzewo=w->prawe_poddrzewo=NULL;
  
  return w;

}

void *wstaw_wierzcholek(struct wierzcholek *w,wchar_t *s){
  int wynik_porownania;
  if (w==NULL){
    
  
    w=nowy_wierzcholek(s);
  }
  else if((wynik_porownania = wcscoll(s,w->slowo)==0)){
      w->liczba_wystapien++;
    }
    else if(wynik_porownania<0){
	w->lewe_poddrzewo = wstaw_wierzcholek(w->lewe_poddrzewo,s);
      }
      else{
	w->prawe_poddrzewo = wstaw_wierzcholek(w->prawe_poddrzewo,s);
      }
  
      return w;
  
}

void inorder_print(struct wierzcholek *w){
  if(w!=NULL){
    inorder_print(w->lewe_poddrzewo);
    wprintf(L"%9d %s\n",w->liczba_wystapien,w->slowo);
    inorder_print(w->prawe_poddrzewo);
  }
}

wchar_t *lowercase(wchar_t *s){
  wchar_t *c=s;
  while(iswupper(*c)){
    *c=towlower(*c);
    c++;
  }
  return s;
}











int main()
{
 
  struct wierzcholek *korzen=NULL;
  wchar_t nastepne_slowo[100];
  
   setlocale(LC_CTYPE,"");
  wchar_t slowo1[100];
  while(wscanf(L"%s",slowo1)==1){
    wcscpy(nastepne_slowo,slowo1);
    korzen = wstaw_wierzcholek(korzen,lowercase(nastepne_slowo));
    
  }
  





  inorder_print(korzen);
    return EXIT_SUCCESS;
}

