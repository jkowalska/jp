/* Liczba doskonała to liczba, która jest sumą podzielników od niej mniejszych. 
Na przykład 6 jest liczbą doskonałą ponieważ: 1 + 2 + 3 = 6
Napisz funkcję, która sprawdza czy podana liczba jest doskonała. Użyj tej 
funkcji do wypisania wszystkich liczb doskonałych mniejszych od 10 000. */

#include <stdio.h>
int doskonala(int i);

int main() {

 int liczba;
  
 printf("Wprowadź liczbę: ");
 scanf("%d", &liczba);

 if (suma == liczba)
  printf("%d jest liczbą doskonałą.\n", liczba);
 else
  printf("%d nie jest liczbą doskonałą.\n", liczba);
 }
  
 return 0;
}

int doskonala(int i) {
 int liczba, i = 1, suma = 0;

 while (i < liczba) {
  if (liczba%i == 0)
   suma = suma + i;
   i++;

  return 0;
}
