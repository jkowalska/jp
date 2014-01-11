/*
Napisz funkcję, która zwraca różnicę między największym 
i najmniejszym elementem tablicy podanej jako argument funkcji. 
Przetestuj ją w prostym programie.
*/

#include <stdio.h>

void minmax(int tab[], int length, int *min, int *max);

int main() {
  int length, int_tab[10], max = 0, min = 0;
  printf("Podaj liczbę elementów tablicy (do 10): ");
  scanf("%d", &length);

  for (int i = 0; i < length; i++) {
    printf("Element %d: ", (i + 1));
    scanf("%d", &int_tab[i]);
  }

  minmax(int_tab, length, &min, &max);
  printf("Najmniejszy element to %d, największy to %d\n", min, max);
  return 0;
}

void minmax(int tab[], int length, int *min, int *max) {
  *min = tab[0];
  *max = tab[0];
  for (int i = 1; i < length; i++) {
    if (tab[i] > *max) {
      *max = tab[i];
    }
    if (tab[i] < *min) {
      *min = tab[i];
    }
  }
}
