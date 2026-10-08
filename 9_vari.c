#include <stdio.h>
void main() {
	int min;
	int max;
	int dazwischen;
	int auswahlAufAb;
	//int zaeler;
	int i;
	printf("Bitte geben Sie das Maximum ein: \n");
	scanf_s("%d", &max);
	printf("Bitte geben Sie das Minimum ein: \n");
	scanf_s("%d", &min);
	if (min <= max) {
		dazwischen = max - min;
		printf("Sollen die die Zahlen aufwärts oder abwärts ausgegeben werden? (aufwärts: 1, abwärts: 2):\n");
		scanf_s("%d", &auswahlAufAb);
		if (auswahlAufAb == 1) {
			for (i = min; i <= max; i++) {
				//zaeler = i + min;
				printf("%d\n", i);
			}
		}
		else if (auswahlAufAb == 2){
			for (i = max; i >= min; i--) {
				printf("%d\n", i);
			}

		}
	}
	else {
		printf("Das Minimum muss kleiner oder gleich dem Maximum sein");
	}
}