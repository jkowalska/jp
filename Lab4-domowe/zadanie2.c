/* Program prosi o podanie kodu ASCII, a następnie wypisuje znak 
odpowiadający temu kodowi */

#include <stdio.h>
#include <ctype.h>

int main() {
  int kod;
        
  printf("Podaj kod ASCII: ");
  scanf("%i", &kod);
    
  if(isprint(kod)) {
    printf("%c\n", kod);
  } else {
    printf("Znak jest niedrukowalny\n");
  }

  return 0;
}
