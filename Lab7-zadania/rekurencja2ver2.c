/* Napisać funkcję rekurencyjną C(n,k) obliczającą
współczynnik Newtona n po k, czyli liczbę podzbiorów
k-elementowych zbioru n-elementowego. */
/* zwykły sposób - nie rekurencja! */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*  / n \      n!             / x \      x!     
    |   |  = --------         |   |  = --------
    \ k /    k!(n-k)!         \ y /    y!(x-y)!   */

lldiv_t newton(int x, int y);
long long factorial(int i);

int main (void) {
  int x, y;
  lldiv_t wynik;

  printf("Podaj liczbę x: ");
  scanf("%d", &x);
  printf("Podaj liczbę y: ");
  scanf("%d", &y);
  wynik = newton(x,y);
  printf("%lld \n", wynik);
}

lldiv_t newton(int x, int y) {
  return lldiv(factorial(x),factorial(y)*factorial(x-y));
}

long long factorial(int i) {
  long long x, wynik;
  x = wynik = 1;
  while (x <= i) {
    wynik *= x;
    x++;
  }
  return wynik;
}
