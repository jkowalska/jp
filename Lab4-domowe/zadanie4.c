/* Program pobiera Twoją datę urodzenia a następnie przelicza ile sekund przeżyłeś do momentu uruchomienia tego programu. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  int rok, miesiac, dzien;
  struct tm *data_urodzenia;
  time_t czas_urodzenia, czas_teraz;

  data_urodzenia = localtime(&czas_urodzenia);
  printf("Podaj swoja date urodzeniaodzenia w formacie rrrr-mm-dd: ");
  scanf("%d-%d-%d", &rok, &miesiac, &dzien);

  data_urodzenia->tm_mday = dzien;
  data_urodzenia->tm_mon = miesiac - 1;
  data_urodzenia->tm_year = rok - 1900;

  czas_urodzenia = mktime(data_urodzenia);
  time(&czas_teraz);
  printf("Do momentu uruchomienia tego programu przezyles:\n");
  printf("\t%.0lf sekund\n", difftime(czas_teraz, czas_urodzenia));

  return 0;
}