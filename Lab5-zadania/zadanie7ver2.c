/* Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy,
a następnie wypisze liczbę liczb parzystych w niej zawartych. */

#include <stdio.h>

int wczytaj_dane(int tablica[], int k) {
  int i = 0, podano_liczbe_parzysta = 0;

  while (i < k) {
    printf("Podaj liczbę: ");
    scanf("%d", &tablica[i]);
    if (tablica[i] % 2 == 0)
      podano_liczbe_parzysta = 1;
    ++i;
  }

  return podano_liczbe_parzysta;
}

void wypisz_wyniki(int tablica[], int rozmiar_tablicy, int jest_parzysta) {
  int i;
  if (jest_parzysta) {
    printf("Parzyste liczby w tablicy to:\n");
    for (i = 0; i < rozmiar_tablicy; i++) {
      if (tablica[i] % 2 == 0) {
        printf(" %d", tablica[i]);
      }
    }  
    printf("\n");
  } else {
    printf("Brak liczb parzystych w tablicy.\n");
  }
}

int main(void) {
  int tab[6], jest_parzysta;
  
  jest_parzysta = wczytaj_dane(tab, 6);
  wypisz_wyniki(tab, 6, jest_parzysta);
  
  return 0;
}
