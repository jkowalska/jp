/* Program wypisuje dziedziny wartości zmiennych typu: char, short, int, long, opatrzonych kwalifikatorami signed oraz unsigned. Wynik powinien zawierać odpowiednie wartości ze standardowych plików nagłówkowych lub wartości obliczone bezpośrednio przez program. Niektóre z wartości podanych w limits.h mozna wyliczyć. Na przykład, największą możliwą wartość typu signed char można wyliczyć tak: (char)((unsigned char) ~0 >> 1)). Najpierw operator dopełnienia jedynkowego ~ zamienia każdy bit wartości zero na jedynkę a jedynkę na zero; następnie wynik jest przekształcany do typu unsigned char; tak otrzymaną wartość przesuwa się w prawo o jedną pozycję, by wyzerować bit znaku; na koniec przekształcamy całość do typu char */

#include <stdio.h>
int main() {

  char c = (char)((unsigned char) ~0 >> 1);
  printf("signed char max: %d\n", c);

  return 0;
} 