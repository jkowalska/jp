/* W poniższym programie, który kopiując wejście 
na wyjście zastępuje kazdy znak tabulacji przez \t 
oraz każdy znak \ przez dwa takie znaki, zostały 
przestawione wiersze. Uporzadkuj je, tak aby powstał 
działający program. */

#include <stdio.h>

int main() {
  int c;

  while ((c=getchar())!=EOF)
    if (c=='\t')
    putchar(c);
  else if (c=='\\')
    printf("\\\\");
  else 
    printf("\\t");

return 0;
}
