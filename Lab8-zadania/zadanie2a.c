/* Jaka jest wartość *wsk oraz *(wsk+2) w każdym przypadku.
Napisz prosty program, który sprawdzi twoje odpowiedzi.
Ile wynosi *(wsk+1) oraz *(wsk+3)? */

#include <stdio.h>

int main(void) {
  int *wsk;
  int tab[2][2] = { {12, 14}, {16} };
  wsk = tab[0];
  printf("%d\n", *wsk);
  printf("%d\n", *wsk + 1);
  printf("%d\n", *wsk + 2);
  printf("%d\n", *wsk + 3);
}
