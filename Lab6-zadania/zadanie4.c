/* Napisz funkcję, która po wczytaniu liczby całkowitej wypisze jej cyfry 
zaczynając od ostatniej i kończąc na pierwszej. Na przykład po wczytaniu 
liczby '1410' funkcja powinna wypisać '0141'. */

#include <stdio.h>
int odwrocona(int a);

int main()
{
  int a;
  printf("Wprowadź liczbę całkowitą:\n");
  scanf("%d\n", &a);

  printf("%d\n", odwrocona(a));

  return 0;
}

int odwrocona(int a)
{
  int b = 0;

  while (a > 0) {
    b = b * 10 + a % 10;
    a = a / 10;
  }

  return b;
}
