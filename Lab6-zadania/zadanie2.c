/* Napisz funkcję, która oblicza wartość silni z liczby naturalnej. 
Wykorzystaj ją w programie wypisującym na wyjście silnię 10 pierwszych 
liczb naturalnych. */

#include <stdio.h>

long silnia(int);
 
int main() {
  int liczba;
  long silnia = 1;
 
  printf("Aby obliczyć wartość silni, wprowadź liczbę naturalną:\n");
  scanf("%d", &liczba);
 
  printf("%d! = %ld\n", liczba, silnia(liczba));
 
  return 0;
}
 
long silnia(int licz) {
  int c;
  long wynik = 1;
 
  for (c = 1; c <= licz; c++)
    wynik = wynik * c;
 
  return wynik;
}
