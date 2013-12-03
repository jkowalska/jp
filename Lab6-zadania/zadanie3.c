/* Liczba doskonała to liczba, która jest sumą podzielników od niej mniejszych. 
Na przykład 6 jest liczbą doskonałą ponieważ: 1 + 2 + 3 = 6
Napisz funkcję, która sprawdza czy podana liczba jest doskonała. Użyj tej 
funkcji do wypisania wszystkich liczb doskonałych mniejszych od 10 000. */

#include <stdio.h>
int main() {
 int liczba, i = 1, suma = 0;
 
 printf("Wprowadź liczbę: ");
 scanf("%d", &liczba);
 
 while (i < liczba) {
  if (liczba%i == 0)
   suma = suma + i;
  i++;
 }

 if (suma == liczba)
  printf("%d jest liczbą doskonałą.\n", i);
 else
  printf("%d nie jest liczbą doskonałą.\n", i);
 
 return 0;
}