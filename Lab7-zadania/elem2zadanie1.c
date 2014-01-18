/*Poniższy – zawierający wiele błędów – program dla podanej 
z klawiatury liczby M ma obliczyć najmniejszą liczbę n, taką że
1 + 2 + 3 +...+ n >= M
Popraw wszystkie błędy w tym programie tak, aby poprawiony program 
prawidłowo obliczał liczbę n. */

#include <stdio.h>

int main() {
  int M, n, suma = 0, i = 1;
  printf("Podaj liczbe M: ");
  scanf("%d", &M);
  while (suma < M) {
    suma = suma+i;
    i++;
  }
  n = --i;
  printf("Szukane n to: %d\n", n);
  return 0;
}
