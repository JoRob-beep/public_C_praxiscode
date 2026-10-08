#include <stdio.h>
void main() {
	int punkte;
	int i = 0;
	printf("Bitte begen Sie die Punkte an: ");
	scanf_s("%d", &punkte);
	if (punkte > 0 && punkte <= 400) {
		if (punkte < 200) {
			printf("Durchgefallen");
		}
		else if (punkte < 250) {
			printf("Genügend");
		}
		else if (punkte < 300) {
			printf("Befriedigend");
		}
		else if (punkte < 350) {
			printf("Gut");
		}
		else if (punkte <= 400) {
			printf("Sehr Gut!\n");			
		}
	}
	else {
		printf("Bitte eine Zahl im Bereich von 1 und 400 eingeben.");
	}	
}