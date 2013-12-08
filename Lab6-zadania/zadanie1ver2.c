/* Zdefiniuj funkcję przeciwprostokatna obliczającą długość przeciwprostokątnej
trójkąta prostokątnego z podanych długości przyprostokątnych. Wykorzystaj
tę funkcję w programie do określania długości przeciwprostokątnej każdego
z następujących trójkątów:

trójkąt bok 1 bok2
--------------------
1 3.0 4.0
2 5.0 5.0
3 1.0 6.0

Funkcja powinna pobierać dwa argumenty typu double i zwracać długość
przeciwprostokątnej też jako double. */

#include <stdio.h>
#include <math.h>

double przeciwprostokatna(double a, double b);

int main() {
  double a, b, wynik;

  printf("Podaj długość boku a:\n");
  scanf("%lf", &a);
  printf("Podaj długość boku b:\n");
  scanf("%lf", &b);

  wynik = przeciwprostokatna(a, b);
  printf("Długość przeciwprostokątnej c to %.2lf\n", wynik);

  return 0;
}

double przeciwprostokatna(double a, double b) {
  double wynik;
  wynik = sqrt(a * a + b * b);

  return wynik;
}

/* 
Overflow - przekroczenie zakresu (przy liczbach całkowitych, które są bardzo duże).
(podobnie z underflow, jeśli liczba będzie bardzo mała)
Jeśli nie chcemy przekroczyć zakresu, możemy użyć funkcji:
hypot()
*/
