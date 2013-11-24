/* Napisz program, który wypisuje kolejne potęgi liczby 2
nie przekraczające 2010 (pętla for) */

#include <stdio.h>
int main()
{
  int wynik;

  wynik = 1;

  for(wynik = 1; wynik <= 2010; wynik *= 2)
  {
    printf("%d\n", wynik);
  }

  return 0;
}
