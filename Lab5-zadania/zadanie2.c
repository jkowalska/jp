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

int main()
{
  int i = 0, w = 0; //liczniki pętli
   
  while (w < 5) {

    while (i < 10) {
      printf("* ");
      ++i;
    }
    printf("\n");
    i = 0;
    while (i < 10) {
      printf(" *");
      ++i;
    }
    i = 0;
    printf("\n");

    ++w;
  }
  return 0;

}
