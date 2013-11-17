/* Program, który prosi użytkownika o wprowadzenie trzech liczb z klawiatury, 
a następnie wypisuje sumę, iloczyn, najmniejszą i największą z wprowadzonych liczb 
(przy użyciu zmiennych min i max) */

#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c, x;
  double min, max;
        
  printf("Wprowadź trzy liczby: \n");
  scanf("%lf %lf %lf", &a, &b, &c);

  x = a + b + c;
  printf("Suma wynosi: %.2lf\n", x);

  x = a * b * c;
  printf("Iloczyn wynosi: %.2lf\n", x);

  min = a;
  if (b < min ) {
    min = b;
  } 
  if (c < min) {
    min = c;
  }

  max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }

  printf("Najmniejsza liczba to: %.2lf\n", min);
    
  printf("Największa liczba to: %.2lf\n", max);
    
  return 0;
}
