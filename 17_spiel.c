#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int zahl;
	int punktestand = 1;
	int randomNum;
	int schierig;
	srand(time(NULL));
	printf("Das ist ein Zahlenratespiel. Bitte wählen Sie die Schwierigkeitsstufe von 1 bis 3:\n");
	scanf_s("%d", &schierig);
	if (schierig == 1) {
		printf("Bitte geben Sie eine Zahl bis 50 ein:");
		scanf_s("%d", &zahl);
		randomNum = rand() % 51;
	}
	else if (schierig == 2) {
		printf("Bitte geben Sie eine Zahl bis 100 ein:");
		scanf_s("%d", &zahl);
		randomNum = rand() % 101;
	}
	else if (schierig == 3) {
		printf("Bitte geben Sie eine Zahl bis 1000 ein:");
		scanf_s("%d", &zahl);
		randomNum = rand() % 1001;
	}
	else if (schierig != 1 || schierig != 2 || schierig != 3) {
		printf("Bitte nur 1, 2 oder 3 eingeben!\n");
		main();
	}
	checkIfZahlIsLikeRand(zahl, punktestand, randomNum, schierig);
	return 0;
}

int checkIfZahlIsLikeRand(int zahl, int punktestand, int randomNum, int schierig) {
	int nochmalOk;
	if (randomNum == zahl) {
		printf("Gratuliere! Sie haben die Zahl erraten (%d).\nVersuche gemacht: %d\n Schwierigkeitsgrad: %d\n", zahl, punktestand, schierig);
		
	}
	else if (randomNum > zahl) {
		printf("Die Zahl war zu klein. (%d).\n%d Versuche gemacht.\n", zahl, punktestand);
		punktestand++;
	}
	else if (randomNum < zahl) {
		printf("Die Zahl war zu groß. (%d).\n%d Versuche gemacht.\n", zahl, punktestand);
		punktestand++;
	}
	else {
		printf("Fehler....");
	}
	if (punktestand == 11) {
		printf("Sie hatten 10 Versuche. GAME OVER\n");
		printf("Wollen Sie nochmal spielen? Dann geben Sie 1 ein:");
		scanf_s("%d", &nochmalOk);
		if (nochmalOk == 1) {
			main();
		}
	}
	else if (randomNum == zahl) {
		printf("Wollen Sie nochmal spielen? Dann geben Sie 1 ein:");
		scanf_s("%d", &nochmalOk);
		if (nochmalOk == 1) {
			main();
		}
	}
	wiederholung(punktestand, randomNum, schierig);
}

int wiederholung(int punktestand, int randomNum, int schierig) {
	int zahl;
		printf("Bitte geben Sie wieder eine Zahl ein:");
		scanf_s("%d", &zahl);
		checkIfZahlIsLikeRand(zahl, punktestand, randomNum, schierig);
}