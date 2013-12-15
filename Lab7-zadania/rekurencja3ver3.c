/* Napisać funkcję rekurencyjną odwracającą kolejność
liter w napisie podanym na wejściu. */
/* rekurencja */

#include <stdio.h>
#include <string.h>

/* odwróć(abcd) ==> d; odwroc(abc) */
char odwroc(char a[]);

int main(void) {
  char c[10];

  printf("Podaj napis: ");
  fgets(c, 10, stdin);
  odwroc(c);
  printf("%s\n", c);
}

char odwroc(char a[]) {
  int n = strlen(a);

  if (n == 0)
    return;
  else {
    putchar(a[n-1]);
    a[n-1] = '\0';
    odwroc(a);
  }   
}
