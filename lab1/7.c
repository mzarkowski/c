#include <stdio.h>
#include <math.h>
int main() {
	float b, pierwiastek;
	printf("Podaj liczbę: ");
	scanf("%f", &b);

	if (b == 0) {
		printf("0 nie jest odwracalne.\n");

	}else {
		printf("Liczba odwrotna do liczby %f to %f\n", b, 1 / b);
	}
	if (b < 0) {
		printf("Podana liczba nie posiada pierwiastka rzeczywistego");
	}
	else{
		pierwiastek = sqrt(b);
		printf("Pierwiastek z liczby %f wynosi %f\n", b, pierwiastek);
	}
	return 0;
}
