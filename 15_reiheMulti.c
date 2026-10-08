#include <stdio.h>
void main() {
	int wh;
	int multi;
	int i = 0;
	int zahl = 1;
	int ergebnis;
	printf("Wie viele Berechnungen wollen Sie haben?");
	scanf_s("%d", &wh);
	printf("Was ist der Multiplikator?");
	scanf_s("%d", &multi);
	do {
		ergebnis = zahl * multi;
		printf("%d\n", ergebnis);
		zahl = ergebnis;
		i++;
	} while (i <= wh);
}