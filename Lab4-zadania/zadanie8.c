/* Program, który prosi użytkownika o wprowadzenie trzech liczb 
z klawiatury, a następnie wypisuje sumę, iloczyn, najmniejszą 
i największą z wprowadzonych liczb. */

#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, x;
	
	
	printf("Wprowadź trzy liczby całkowite: \n");
	scanf("%lf %lf %lf", &a, &b, &c);

	x = a + b + c;
	printf("Suma wynosi: %.2lf\n", x);

	x = a * b * c;
	printf("Iloczyn wynosi: %.2lf\n", x);

	printf("Najmniejsza liczba to: \n");

	printf("Największa liczba to: \n");

	return 0;
}