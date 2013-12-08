/* Napisz program, który wyświetla prostokąt, owal, strzałkę
i diament w/g poniższego wzoru:

*****    **      *      *
*   *   *  *    ***    * *
*   *  *    *  *****  *   *
*   *  *    *    *    *   *
*   *   *  *     *     * *
*****    **      *      *

Do każdej figury użyj osobnej funkcji, np. funkcja prostokat
powinna dać się użyć do rysowania prostokątów różnej wielkości:

void prostokat(int szerokosc, int wysokosc); */

#include <stdio.h>
void prostokat(int szerokosc, int wysokosc);
void owal(int szerokosc, int wysokosc);
void strzalka(int szerokosc, int wysokosc);
void diament(int szerokosc, int wysokosc);

void podstawa(int szerokosc);
void boki(int szerokosc, int wysokosc);

int main() {
  int szerokosc, wysokosc;

  printf("Podaj szerokosc figur: ");
  scanf("%d", &szerokosc);
  printf("Podaj wysokosc figur: ");
  scanf("%d", &wysokosc);

  printf("\n");

  prostokat(szerokosc, wysokosc);

  return 0;
}

void prostokat(int szerokosc, int wysokosc) {
	podstawa(szerokosc);
  boki(szerokosc, wysokosc - 2);
	podstawa(szerokosc);
}

void podstawa(int szerokosc) {
	int i;
	for(i = 0; i < szerokosc; i++)
	  putchar("*");
	putchar("\n");
}

void boki(int szerokosc, int wysokosc) {
	for(int i = 0; i < wysokosc; i++) {
		putchar("*");

		putchar(" "); putchar(" "); putchar(" "); putchar(" ");		// do wyliczenia

		putchar("*");
		putchar("\n");
	}
}

void owal(int szerokosc, int wysokosc) {

}

void strzalka(int szerokosc, int wysokosc) {

}

void diament(int szerokosc, int wysokosc) {

}
