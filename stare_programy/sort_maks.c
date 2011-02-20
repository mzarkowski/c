#include<stdio.h>

//sortowanie przez wstawianie

main() {

int i, j, n, x;
printf("Ilosc liczb: ");
scanf("%i", &n);
int t[n];
  for (i=0; i<n; i++){
	    scanf("%i", &t[i]);
	    j=i;
	    while (j>0 && t[j]<t[j-1]){
			      x=t[j];
			      t[j]=t[j-1];
			      t[j-1]=x;
			      j--;
			    }
	  }

 for (i=0; i<n; i++){
  printf("%i ", t[i]);
  }
printf("\n");
}

