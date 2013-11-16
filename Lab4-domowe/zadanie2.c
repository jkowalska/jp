/* Program prosi o podanie kodu ASCII, a następnie wypisuje znak odpowiadający temu kodowi */

#include <stdio.h>

int main() { 
	int kod;
	
	printf("Podaj kod ASCII: "); 
	scanf("%d", &kod); 
	printf("%c\n", kod); 

	return 0; 
} 