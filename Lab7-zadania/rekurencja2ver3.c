/* Napisać funkcję rekurencyjną C(n,k) obliczającą
współczynnik Newtona n po k, czyli liczbę podzbiorów
k-elementowych zbioru n-elementowego. */
/* rekurencja */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int newton(int n, int k) {
  if (k == 0 || k == n)
    return 1;
  else
    return newton(n-1, k-1) + newton(n-1, k);
}

int main (void) {
  int x, y;
  
  printf("Podaj liczbę x: ");
  scanf("%d", &x);
  printf("Podaj liczbę y: ");
  scanf("%d", &y);
  
  printf("%d \n", newton(x, y));
}
