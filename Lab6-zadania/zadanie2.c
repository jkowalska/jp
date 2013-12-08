/* Napisz funkcję, która oblicza wartość silni z liczby naturalnej.
Wykorzystaj ją w programie wypisującym na wyjście silnię 10 pierwszych
liczb naturalnych. */

#include <stdio.h>

long long int silnia(int);  // lub long long unsigned int silnia(int);
                            // (interesują nas tylko liczby 0 i większe)
int main() {
  int liczba;
   
  printf("Aby obliczyć wartość silni, wprowadź liczbę naturalną:\n");
  scanf("%d", &liczba);
 
  if (liczba < 0)
    printf("Liczba musi być większa od zera.");
  else {
    printf("%d! = %lli\n", liczba, silnia(liczba));
}
 
  return 0;
}
 
long long int silnia(int x) {
  int a;
  long long int out = 1;
 
  for (a = 1; a <= x; a++)
    out = out * a;
 
  return out;
}

/* jeśli wpiszemy:
double silnia(int); 
(%.0f)
(można wtedy wyliczyć nawet 100!, ale nie wiadomo, czy wynik będzie prawidłowy)
*/
