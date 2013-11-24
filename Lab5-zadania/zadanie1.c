/* Napisz program, który wypisuje kolejne potęgi liczby 2 
nie przekraczające 2010 */

#include <stdio.h>
#include <math.h>

int main()
{
  int n, x;

  for (n = 0; n <= 2010; n++);
  {
  printf("%d", power( n, 2));
  }

  return 0;
}
