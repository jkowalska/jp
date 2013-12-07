/* Napisz funkcję, która oblicza wartość silni z liczby naturalnej. 
Wykorzystaj ją w programie wypisującym na wyjście silnię 10 pierwszych 
liczb naturalnych. */

#include <stdio.h>

long silnia(int liczba);
 
int main() {
  int liczba;
  long silnia = 1;
 
  printf("Aby obliczyć wartość silni, wprowadź liczbę naturalną:\n");
  scanf("%d", &liczba);
 
  printf("%d! = %ld\n", liczba, silnia(liczba));
 
  return 0;
}
 
long silnia(int liczba) {
  int i;
  wynik = 1;
 
  for (i = 1; i <= liczba; i++)
    wynik = wynik * i;
 
  return wynik;
}
