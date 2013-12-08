/* Liczba doskonała to liczba, która jest sumą podzielników od niej mniejszych. 
Na przykład 6 jest liczbą doskonałą ponieważ: 1 + 2 + 3 = 6
Napisz funkcję, która wypisze wszystkie liczby doskonałe mniejsze od 10 000. */

#include <stdio.h>

int main() {
 int doskonala(int i);
 int liczba, i, suma;

 printf("Wszystkie liczby doskonałe mniejsze od 10 000 to: \n");

 return 0;

}

int doskonala(int i) {

   for (liczba = 1; liczba <= 10000; liczba++) {
   i = 1;
   suma = 0;

   for(i = 1; i < liczba; i++) {
    if (liczba%i == 0)
    suma = suma + i;
   }

   if (suma == liczba)
     printf("%d \n", liczba);
 }

 return 0;
}

  /* lub pętla while zamiast drugiej for:
  
   while (i < liczba) {
    if (liczba%i == 0)
     suma = suma + i;
     i++;
   }
   
  */
