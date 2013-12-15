/* Korzystając z twierdzenia Euklidesa, napisać program
obliczający rekurencyjnie największy wspólny dzielnik
z liczb podanych na wejściu. */
/* rekurencja */

#include <stdio.h>

/* nwd(a, b) = nwd(a, a % b */
int nwd(int a, int b);

int main(void) {
  int x, y, c;

  printf("Podaj pierwszą liczbę: ");
  scanf("%d", &x);
  printf("Podaj drugą liczbę: ");
  scanf("%d", &y);

  c = nwd(x, y);
  printf("Największy wspólny dzielnik: %d\n", c);
}

int nwd(int a, int b) {
  if (b == 0)
    return a;
  else
    return nwd(b, a % b);
}
