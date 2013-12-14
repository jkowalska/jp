/* Napisać funkcję rekurencyjną odwracającą kolejność 
liter w napisie podanym na wejściu. */

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b);
void reverse(char *str, int n, int r);

int main(void) {

  char bufor[50];

  printf("Wpisz ciąg znaków: ");
  scanf("%s", bufor);

  reverse(bufor, 0, strlen(bufor) - 1);
  printf("Odwrócona kolejność: %s\n", bufor);

  return 0;
}

void swap(char *a, char *b) {
  char c;
  c = *a;
  *a = *b; 
  *b = c;
}

void reverse(char *str, int n, int r) {
  if (r <= n) return;		// warunek stopu
  swap(str + n, str + r);
  reverse(str, n + 1, r - 1);
}
