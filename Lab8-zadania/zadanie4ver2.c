/*
Napisz funkcję, która zwraca różnicę między największym
i najmniejszym elementem tablicy podanej jako argument funkcji.
STRUKTURY
*/

#include <stdio.h>

/*struct mm {*/
  struct minmax {
  int min;
  int max;
};
/*struct mm minmax(int tab[], int length);*/
struct minmax minmax(int tab[], int length);

int main() {
  int length, int_tab[10];
/*  struct mm res;*/
  struct minmax res;

  printf("Podaj liczbę elementów tablicy (do 10): ");
  scanf("%d", &length);

  for (int i = 0; i < length; i++) {
    printf("Element %d: ", (i + 1));
    scanf("%d", &int_tab[i]);
  }
  
  res = minmax(int_tab, length);
  printf("Najmniejszy element to %d, największy to %d\n", res.min, res.max);
  printf("Różnica to %d\n", res.max - res.min);
  return 0;
}

/*struct mm minmax(int tab[], int length) {*/
  struct minmax minmax(int tab[], int length) {
  /*struct mm wyniki;*/
  struct minmax wyniki;
  wyniki.max = 0, wyniki.min = 0;

  wyniki.min = tab[0];
  wyniki.max = tab[0];
  for (int i = 1; i < length; i++) {
    if (tab[i] > wyniki.max) {
       wyniki.max = tab[i];
    }
    if (tab[i] < wyniki.min) {
       wyniki.min = tab[i];
    }
  }
 /* wyniki.min = min;
  wyniki.max = max;*/
  return wyniki;
}
