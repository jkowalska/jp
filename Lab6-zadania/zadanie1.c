/* Zdefiniuj funkcję przeciwprostokatna obliczającą długość przeciwprostokątnej 
trójkąta prostokątnego z podanych długości przyprostokątnych. Wykorzystaj 
tę funkcję w programie do określania długości przeciwprostokątnej każdego 
z następujących trójkątów:

trójkąt  bok 1  bok2
--------------------
1        3.0    4.0
2        5.0    5.0
3        1.0    6.0

Funkcja powinna pobierać dwa argumenty typu double i zwracać długość 
przeciwprostokątnej też jako double. */

#include <stdio.h>
#include <math.h>

double przeciwprostokatna(double a, double b);

int main()
{
  double a, b;

  printf("Podaj długość boku a:\n");
  scanf("%lf", &a);
  printf("Podaj długość boku b:\n");
  scanf("%lf", &b);
  printf("Długość przeciwprostokątnej c to %.2lf\n",
	 przeciwprostokatna(a, b));

  return 0;
}

double przeciwprostokatna(double a, double b)
{

  return sqrt(pow(a, 2) + pow(b, 2));
}
