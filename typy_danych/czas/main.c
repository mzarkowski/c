#include <stdio.h>
#include <time.h>

int main(){
  struct tm czas = {0}; 
  struct tm *teraz; 
  time_t czasteraz; 
  time_t sek;
  int rok;

  czasteraz = time(NULL); 
  teraz = localtime (&czasteraz); 

  struct tm tera = *teraz; 
  rok = tera.tm_year; 

  printf("Podaj wiek: ");
  int wiek;
  scanf("%i", &wiek);
  rok -= wiek; 
	czas.tm_year = rok; 

  sek = czasteraz - mktime(&czas);
  printf("Minelo %u sekund\n", sek);
return 0;
}
