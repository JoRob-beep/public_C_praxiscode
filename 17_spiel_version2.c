#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int schwierig;
	int schwierigRange;
	int zufall;
	int versuche = 0;
	int wh = 0;
	srand(time(NULL));
	int vergleichZufallUndAusgaben(int wh, int zufall, int versuche, int  schwierigRange);
	do {
		wh = 0;
		printf("Zahlenratespiel. Bitte geben sie den Schwierigkeitsgrad zw. 1 und 3 ein:");
		scanf_s("%d", &schwierig);
		if (schwierig == 1) {
			schwierigRange = 50;
			zufall = rand() % 51;
			vergleichZufallUndAusgaben(wh, zufall, versuche, schwierigRange);
		}
		else if (schwierig == 2) {
			zufall = rand() % 101;
			schwierigRange = 100;
			vergleichZufallUndAusgaben(wh, zufall, versuche, schwierigRange);
		}
		else if (schwierig == 3) {
			zufall = rand() % 1001;
			schwierigRange = 1000;
			vergleichZufallUndAusgaben(wh, zufall, versuche, schwierigRange);
		}
		printf("GAME OVER. Zu viele Versuche\n");
		printf("Nochmal spielen? Dann 1 eingeben:");
		scanf_s("%d", &wh);
	} while (wh == 1);
}
int vergleichZufallUndAusgaben(int wh, int zufall, int versuche, int  schwierigRange) {
	int zahl;
	do {
		printf("Geben Sie eine Zah zwischen 0 und %d ein. (10 Versuche)", schwierigRange);
		scanf_s("%d", &zahl);
		if (zahl < zufall) {
			versuche++;
			printf("Zahl zu klein. Versuch(e): %d\n", versuche);
		}
		else if (zahl > zufall) {
			versuche++;
			printf("Zahl zu groﬂ. Versuch(e): %d\n", versuche);
		}
		else if (zahl == zufall) {
			printf("Gratuliere! Sie haben die Zahl erraten.\n Nochmal spielen? Dann 1 eingeben:");
			scanf_s("%d", &wh);
			versuche = 11;
		}
	} while (versuche < 10);
	return wh;
}