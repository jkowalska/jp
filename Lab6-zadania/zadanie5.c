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

main()
{
  int szerokosc, wysokosc;

  printf("Podaj szerokosc figur:\n");
  scanf("%d", &szerokosc);
  printf("Podaj wysokosc figur:\n");
  scanf("%d", &wysokosc);

  return 0;
}

void prostokat(int szerokosc, int wysokosc)
{
  
}

void owal(int szerokosc, int wysokosc)
{

}

void strzalka(int szerokosc, int wysokosc)
{

}

void diament(int szerokosc, int wysokosc)
{

}
