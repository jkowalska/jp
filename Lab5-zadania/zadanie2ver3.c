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

void rysuj_gwiazdki(char element[]); //deklarujemy element

int main()
{
  int w = 0; 
   
  while (w < 5) 
  {
    rysuj_gwiazdki("* ");
    rysuj_gwiazdki(" *");
    ++w;
  }
  return 0;
}

void rysuj_gwiazdki(char element[])
{
int i = 0;
  while (i < 10) {
    printf("%s", element);
    ++i;
  }
  printf("\n");
}
