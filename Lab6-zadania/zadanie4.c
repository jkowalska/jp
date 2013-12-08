/* Napisz funkcję, która po wczytaniu liczby całkowitej wypisze jej cyfry
zaczynając od ostatniej i kończąc na pierwszej. Na przykład po wczytaniu
liczby '1410' funkcja powinna wypisać '0141'. */

#include <stdio.h>

void inverted(int a);

int main() {
  int a;

  printf("Wprowadź liczbę całkowitą: ");
  scanf("%d", &a);
  inverted(a);
  printf("\n");

  return 0;
}

void inverted(int x) {
  
  while (x > 0) {
    printf("%d", x % 10);
    x = x / 10;
  }
}
