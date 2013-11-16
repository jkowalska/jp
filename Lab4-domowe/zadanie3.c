/* Program pobiera Twój wiek w latach, a następnie przelicza go na sekundy */

/* Do sprawdzania czy rok jest jest przestępny skorzystaj z poniższego kodu 
(K&R, s. 153): leap = year%4==0 && year%100!=0 || year%400 == 0 */

#include <stdio.h>

int main () {
	int year = 365*24*60*60;
	int leap_year = 366*24*60*60;
	int current_year = 2013;
	int age;
        int i;
	int leap;
	int wynik = 0;

	printf("Podaj swój wiek w latach: ");
	scanf("%d", &age);

	for (i = current_year-1; i >= current_year - age; i--) {
    	leap = ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0);
   	if (leap == 1)
      	wynik = wynik + leap_year;
    	else
      	wynik = wynik + year;
  	}

	printf("Twój wiek w sekundach to: %d\n", wynik); 

	return 0;
}