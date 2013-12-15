/* Napisać rekurencyjną implementację funkcji
obliczającej nk (n do potęgi k). */

/* potęga: n^k = n * n * ... * n -- k razy */
/* n^k = n * n^{k-1} */

#include <stdio.h>

long long int potega(int n, int k) {
	
	if (k == 1) {
		return 1;
	} else {
		return n * potega(n, k-1);
	}
}

int main(void) {
  int x, y;
  long long int wynik;

  printf("Obliczanie potęgi\n");
  printf("Wpisz podstawę potęgi: ");
  scanf("%d", &x);
  printf("Wpisz wykładnik potęgi: ");
  scanf("%d", &y);

  wynik = potega(x, y);

  printf("Wynik: %lld\n", wynik);
}
