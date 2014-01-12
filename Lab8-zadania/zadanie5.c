/*
Napisz program, używajacy wskaźników do nadania wartości 128 każdemu 
elementowi tablicy int tab[512]. Przetestuj ją w prostym programie. 
Jak inaczej można zainicjalizować tablicę w C?
*/

#include <stdio.h>
#include <math.h>

int main() {
  int tab[512], licznik, liczba = 128, index = 0;
  int *wskaznik = &liczba;

  for (licznik = 0; licznik <= 512; index++) {
    tab[licznik] = *wskaznik;
    printf("%d ==> %d\n", index, tab[licznik]);
  }
  return 0;
}
