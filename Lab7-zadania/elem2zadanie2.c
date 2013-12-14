/* Program ma sprawdzać czy podana liczba całkowita jest pierwsza */

#include <stdio.h>

int main() {
  int n, wynik;
	  
  printf("Podaj liczbę całkowitą: ");
  scanf("&d", &n);
  
  wynik = jest_pierwsza(n);

  if (wynik = 1)
    printf("Podana liczba '%d' jest liczbą pierwszą\n", n);
  else
    printf("Podana liczba '%d' jest liczbą złożoną\n", n);
}

int jest_pierwsza(int a) {
  int x;

  for(x = 2; x <= a - 1; x++) {
  if (a % x == 0)
    return 0;
  else if (x == a)
    return 1;
  }
}
