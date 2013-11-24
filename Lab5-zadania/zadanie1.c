/* Napisz program, który wypisuje kolejne potęgi liczby 2
nie przekraczające 2010 */

#include <stdio.h>
int main()
{
  int wynik;

  //liczba = 1;
  wynik = 1;

  while (wynik <= 2010) 
  {
  	printf("%d\n", wynik);
    //liczba = liczba * 2;
    wynik = wynik * 2; //lub wynik *= 2;
  }

  return 0;
}
