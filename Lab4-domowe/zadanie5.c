/* Program pyta o podanie Twojego wzrostu i przelicza go na cale, jeśli podałeś wzrost w centymetrach, albo przelicza go na centymetry — jeśli podałeś go w calach. 

/* Calowi odpowiada 2.54 centymetra */

#include <stdio.h>

int main() {

	double cale, centymetry;

	printf("Podaj swój wzrost: ");

	scanf("%lf.1",&centymetry);

	cale=centymetry/2.54;

	printf("%lf.1\n", cale);

	return 0;
}