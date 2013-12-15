/* Napisać funkcję rekurencyjną odwracającą kolejność
liter w napisie podanym na wejściu. */
/* rekurencja */

#include <stdio.h>
#include <string.h>

void odwroc(char a[]);
void reverse(char a[], int n);

void reverse(char a[], int n) {
  if ( n == 0 )
    return;
  else {
    putchar(a[n-1]);
    reverse(a, n-1);
  }
}

int main(void) {
  char c[10];

  printf("Podaj napis: ");
  fgets(c, 10, stdin);
  odwroc(c);
  printf("%s\n", c);
}

void odwroc(char a[]) {
  int n = strlen(a);
  reverse(a, n);
}
