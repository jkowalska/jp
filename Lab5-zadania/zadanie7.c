/* Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy, 
a następnie wypisze liczbę liczb dodatnich w niej zawartych. */

#include <stdio.h>
int main(void)
{
  int tab[5];
  int i = 0;

  while (i < 6)
  {
    printf("Podaj liczbę: ");
    scanf("%d", &tab[i]);
    ++i;
  }

printf("Parzyste liczby w tablicy to: ");
for (i = 0; i < 6; i++)
{
  if(tab[i] % 2 == 0)
  {
    printf("%d\n", tab[i]);
  }
}
  
  return 0;
}
