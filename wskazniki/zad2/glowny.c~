#include <stdio.h>

int main()
{
    int t[4] = { 2, 8, 1, 3 };
    int *a[4];

    int i, k;
    for (i = 0; i < 4; i++) {
	printf("%d ", t[i]);
    }
    for (i = 0; i < 4; i++) {
	 a[i] = &t[i];
	 //a[i] = t + i;
    }
    for (i = 0; i < 4; i++) {
	for (k = i; k < 4; k++)
		if( *a[i] > *a[k] )
		{
			int* pomoc;
		       	pomoc = a[i];
		       	a[i] = a[k];
		       	a[k] = pomoc; 
		}	
    }

    printf("\n");
    //wynik
    for (i = 0; i < 4; i++) {
	printf("%d ", *a[i]);
    }
    printf("\n");
    return 0;
}

