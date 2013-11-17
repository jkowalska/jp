/* Program wypisuje tabelkę wartości pierwiastka kwadratowego. Program pyta o wartość poczatkową, 
wartość końcową, krok dla argumentu i wypisuje tabelkę w podanym zakresie. Liczby powinny być 
wypisywane z dokładnością czterech miejsc po przecinku (pętla for) */

#include <stdio.h>
#include <math.h>

int main () {

  double a, b, c;

  printf("Podaj wartość początkową: \n");
  scanf("%lf", &a);
  printf("Podaj wartość koncową: \n");
  scanf("%lf", &b);
  printf("Podaj wartość kroku dla argumentu: \n");
  scanf("%lf", &c);

  for(; a <= b ; a += c) {
        printf("%.4lf %.4lf\n", a, sqrt(a));   
  }

  return 0;
}
