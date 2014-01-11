/*
Napisz program, używajacy wskaźników do nadania wartości 128 każdemu 
elementowi tablicy int tab[512]. Przetestuj ją w prostym programie. 
Jak inaczej można zainicjalizować tablicę w C?
*/

#include <stdio.h>

int main(void) {
  int tab[512];
  int i;

  for (i = 0; i <= 512; i++) {
    tab[i] = 128;
  }
}
