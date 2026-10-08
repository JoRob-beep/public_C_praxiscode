#include <stdio.h>
void main() {
	int max;
	int i;
;	printf("Was ist die Obergrenze der Primzahlen?\n");
	scanf_s("%d", &max);
	for (i = 1; i <= max; i++) {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 11 != 0 && i % 17 != 0) {   //Ist das so erlaubt??
			printf("%d\n", i);
		}
	}
}