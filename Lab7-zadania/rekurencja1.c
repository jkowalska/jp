/* Napisać rekurencyjną implementację funkcji 
obliczającej nk (n do potęgi k). */

#include <stdio.h>

int power(int n, int k);

int main() {
  int n, k;

  printf("Wpisz podstawę potęgi: ");
  scanf("%d", &n);
  printf("Wpisz wykładnik potęgi: ");
  scanf("%d", &k);
  printf("%d do potęgi %d = %d\n", n, k, power(n, k));
  return 0;
}

int power(int n, int k) {

  if (k != 1)
    return (n * power(n, k - 1));
}
