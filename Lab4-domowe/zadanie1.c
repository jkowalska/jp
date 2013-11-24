/* Zbadaj jak zachowuje się Sigma w sytuacji przepełnienia zmiennej całkowitej, 
przepełnienia zmiennej zmiennoprzecinkowej i niedomiaru zmiennej zmiennoprzecinkowej. 
Zastosuj metodę doświadczalną, czyli napisz programy, w których wystąpią te przepełnienia 
i niedomiary. Wskazówka: zajrzyj do plików limits.h oraz float.h w których zdefiniowano 
stałe symboliczne dla wszystkich rozmiarów danych oraz dla innych właściwości komputera 
i kompilatora. (Są też strony manuala limits.h i float.h.) */

#include <stdio.h>
int main()
{
  int i = 2147483647;
  unsigned int j = 4294967295;
  printf("%d %d %d\n", i, i+1, i+2);
  printf("%u %u %u\n", j, j+1, j+2);
  return 0;
}

/* zmienna j po osiągnięciu wartości max rozpoczyna liczenie od początku, podobnie zmienna i, 
ale podczas gdy zmienna j typu unsigned int rozpoczyna liczenie od zera, zmienna i typu int
zaczyna je od wartości -2 147 483 647.*/
  
