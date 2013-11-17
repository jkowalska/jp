/* Program pobiera Twój wiek w latach, a następnie przelicza go na sekundy */

/* Do sprawdzania czy rok jest jest przestępny skorzystaj z poniższego kodu
(K&R, s. 153): leap = year%4==0 && year%100!=0 || year%400 == 0 */

#include <stdio.h>
#include <time.h>

// liczba sekund w roku: 31536000

int main () {
  int wiek, miesiace, dni, godziny, minuty;
  long int sekundy;
  int rok;

  printf("Podaj swój wiek: ");
  scanf("%d", &wiek);

  miesiace = wiek * 12;
  dni = wiek * 12;
  godziny = dni * 24;
  minuty = godziny * 60;
  sekundy = minuty * 60;

  return ((rok % 4 == 0) && (rok % 100 != 0)) || (rok % 400 == 0);

  printf("Twój wiek w sekundach:\n");
  printf("%d miesięcy\n", miesiace);
  printf("%d dni\n", dni);
  printf("%d godzin\n", godziny);
  printf("%d minut\n", minuty);
  printf("%d sekund\n", sekundy);

  printf("Twój wiek w sekundach:\n");

  return 0;
}
