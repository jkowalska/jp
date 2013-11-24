/* Napisz program, który wczyta dwie liczby całkowite a i b (a<b) 
a następnie wypisze wszystkie liczby całkowite pomiędzy a i b */

#include <stdio.h>

int main()
{
  int a, b;

  printf("Podaj dwie liczby całkowite: ");
  scanf("%d %d", &a, &b);
  
  while (a <= b) 
  {
    printf("%d\n", a);
    ++a;
  }
  return 0;
}
