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

/*wypisz element k razy */
void rysuj(char element[], int k); 

int main()
{
  int w = 0; 
   
  while (w < 4) 
  {
    rysuj("* ", 10);
    rysuj(" *", 10);
    ++w;
  }
  return 0;
}

void rysuj(char element[], int k)
{
int i = 0;
  while (i < k) {
    printf("%s", element);
    ++i;
  }
  printf("\n");
}
