/* Liczba doskonała to liczba, która jest sumą podzielników od niej mniejszych. 
Na przykład 6 jest liczbą doskonałą ponieważ: 1 + 2 + 3 = 6
Napisz funkcję, która wypisze wszystkie liczby doskonałe mniejsze od 10 000. */

#include <stdio.h>
int main() {
 int liczba, i, suma;
  
 printf("Wszystkie liczby doskonałe mniejsze od 10 000 to: \n");
 for (liczba = 1; liczba <= 10000; liczba++) {
   i = 1;
   suma = 0;

   while (i < liczba) {
     if (liczba%i == 0)
      suma = suma + i;
      i++;
   }

   if (suma == liczba)
     printf("%d \n", liczba);
 }

 return 0;
}
