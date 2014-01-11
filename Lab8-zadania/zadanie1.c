/*Co wypisuje następujący program:*/

#include <stdio.h>

int main () {
  int ref[] = {8, 4, 0, 2};
  int *wsk;
  int indeks;

  for (indeks = 0, wsk = ref; indeks < 4; indeks++, wsk++)
    printf("%d %d\n", ref[indeks], *wsk);
}

/* 
8 8
4 4
0 0
2 2
*/

/*Ile elementów ma tablica 'ref'? Czego adresem jest 'ref'? a 'ref+1'?*/
