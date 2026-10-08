#include <stdio.h>
void main() {
	int zahl1;
	int zahl2;
	int schritte;
	int ergebnis;
	int i;

	printf("Bitte geben Sie die erste Zahl ein:\n");
	scanf_s("%d", &zahl1);

	printf("Bitte geben Sie die zeite Zahl ein:\n");
	scanf_s("%d", &zahl2);

	printf("Bitte geben Sie die Stufen-Anzahl der Turmrechnung ein:\n");
	scanf_s("%d", &schritte);

	for (i = 0; i < schritte; i++) {
		ergebnis = zahl1 * zahl2;
		printf("%d * %d = %d\n", zahl1, zahl2, ergebnis);
		zahl1 = ergebnis;
	}
	for (i = 0; i < schritte; i++) {
		ergebnis = zahl1 / zahl2;
		printf("%d / %d = %d\n", zahl1, zahl2, ergebnis);
		zahl1 = ergebnis;
	}
}