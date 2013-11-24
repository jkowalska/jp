/* Napisz program wyświetlający poniższą szachownicę:

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
*/

#include <stdio.h>

void rysuj_gwiazdki_1();
void rysuj_gwiazdki_2();

int main()
{
  int w = 0; 
   
  while (w < 5) 
  {
    rysuj_gwiazdki_1();
    rysuj_gwiazdki_2();
    ++w;
  }
  return 0;
}

void rysuj_gwiazdki_1() {
int i = 0;
  while (i < 10) {
    printf("* ");
    ++i;
  }
  printf("\n");
}

void rysuj_gwiazdki_2() {
int i = 0;
  while (i < 10) {
    printf(" *");
    ++i;
  }
  printf("\n");
}
