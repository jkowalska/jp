[Zadania z programowania](http://wbzyl.inf.ug.edu.pl/c/budowanie-programow "Zadania z programowania")

# Zadanie 5a

__Pierwsza wersja:__

```sh
/* Program ten wykonuje konwersję ze stopni na radiany
   według wzoru: rad = 2 * PI * deg / 360    */
   
#include <stdio.h>
#include <math.h>

int main() {
   double deg, rad;

   printf("Podaj kąt w stopniach : ");
   scanf("%lf", &deg);
   rad = 2 * 3.1415 * deg / 360 ;  /* grep PI /usr/include/math.h */
   printf("%lf deg = %lf rad\n", deg , rad);
   
   return 0;
}
```
__Druga wersja:__

```sh
/* Program ten pyta o imie i wykonuje konwersję ze stopni na radiany
   według wzoru: rad = 2 * PI * deg / 360    */

#include <stdio.h>
#include <math.h>

int main() {
   double deg, rad;
   char name[20];

   printf("Podaj imię : ");
   scanf("%19s", name);

   printf("Podaj kąt w stopniach : ");
   scanf("%lf", &deg);
   rad = 2 * 3.1415 * deg / 360 ;  /* grep PI /usr/include/math.h */
   printf("%lf deg = %lf rad\n", deg , rad);

   return 0;
}
```
__Trzecia wersja:__

(grep PI /usr/include/math.h)
# define M_PI     3.14159265358979323846  /* pi */

```sh
/* Program ten pyta o imie i wykonuje konwersję ze stopni na radiany
   według wzoru: rad = 2 * PI * deg / 360    */

#include <stdio.h>
#include <math.h>

int main() {
   double deg, rad;
   char name[20];

   printf("Podaj imię : ");
   scanf("%19s", name);

   printf("Podaj kąt w stopniach : ");
   scanf("%lf", &deg);
   rad = 2 * M_PI * deg / 360 ;  /* grep PI /usr/include/math.h */
   printf("%lf deg = %.10lf rad\n", deg , rad);

   return 0;
}
```
# Zadanie 5b

__Pierwsza wersja:__

```sh
/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */

#include <stdio.h>
int main()
{
   int k, n;

   printf("Podaj pierwszą liczbę całkowitą: ");
   scanf("%i", &k);
   printf("Podaj pierwszą liczbę całkowitą: ");
   scanf("%i", &n);
   
   /* printf("Wczytano liczby: %i i %i\n", k, n); */
   /* k >= n ? k : n */
   /*printf("Wieksza liczba to %i\n", k >= n ? k : n) */
   
   if (k >= n) {
     printf("Większa liczba %i\n", k);
   } else {
     printf("Większa liczba %i\n", n);	
   }

   return 0; 
}
```
__Druga wersja:__

```sh
/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */

#include <stdio.h>
int main()
{
   int k, n;

   printf("Podaj dwie liczby całkowite: ");
   scanf("%i %i", &k, &n);
      
   printf("Wieksza liczba to %i\n", k >= n ? k : n);

   return 0; 
}
```
