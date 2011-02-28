//program dodaje liczby 30 cyfrowe
#include<stdio.h>
main(){
int tab1[30], tab2[30], tab3[31], i=0, n=0, p=0, w=0;
printf("Podaj cyfry pierwszej liczby: ");

for(i=0;i<30;i++){

scanf("%i", &n);
tab1[i] = n;
}

printf("\nPodaj cyfry drugiej liczby");
for(i=0;i<30;i++){
scanf("%i", &n);
tab2[i] = n;
}


for(i=29;i>=0;i++){
   


   if(tab1[i]+tab2[i]>9){
   w = tab1[i]+tab2[i]-10;
   p++;
   }
   else{
   w = tab1[i]+tab2[i];
   }

   if(p==2){
   w++;
   p = p-1;
   }
  
   tab3[i] = w + p;


}

printf("\nTa liczba to : ");

if(tab3[29] != 0){
for(i=0; i<31; i++){
printf("%i", tab3[i]);
}
}
else{
for(i=0; i<30; i++){
printf("%i", tab3[i]);
}
}

}

