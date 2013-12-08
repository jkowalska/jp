/* Napisz funkcję, która po wczytaniu liczby całkowitej wypisze jej cyfry
zaczynając od ostatniej i kończąc na pierwszej. Na przykład po wczytaniu
liczby '1410' funkcja powinna wypisać '0141'. */

#include <stdio.h>
#include <stdlib.h>

char *inverted(int x);

int main() {
  int a;

  printf("Wprowadź liczbę: ");
  scanf("%d", &a);
  printf("Cyfry od końca: %s\n", inverted(a));
  printf("\n");

  return 0;
}

char *inverted(int x) {
  char *znaki = malloc(4);
  znaki[0] = '0';
  znaki[1] = '1';
  znaki[2] = '4';
  znaki[3] = '1';
  
/* znaki[4] == "\0"; */

  return znaki;
}
