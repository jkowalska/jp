/* Napisz program, który wypisuje kolejne potęgi liczby 2
nie przekraczające 2010 (pętla do...while) */

#include <stdio.h>
int main()
{
  int liczba, wynik;

  liczba = 1;
  
  do
  {
	  wynik = liczba * 2;
    printf("%d\n", wynik);
    liczba = liczba * 2;
  }
  while (wynik <= 2010);
  
  return 0;
}
