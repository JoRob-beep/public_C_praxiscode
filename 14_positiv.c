#include <stdio.h>
void main() {
	int input = 1;
	int inputLow = -1;
	int inputHigh = 1;

	do {
		printf("Geben Sie eine positive Zahl ein (0 ist beenden):");
		scanf_s("%d", &input);
		if (input > inputHigh) {
			inputHigh = input;
		}
		
		if ((inputLow > input || inputLow == -1) && input != 0)  {
			inputLow = input;
		}
		if (input == 0 || abs(input) != input) {
			break;
		}
		
	} while (1);
	printf("Die niedrigste Zahl ist: %d\n", inputLow);
	printf("Die höchste Zahl ist: %d", inputHigh); // Bei Minuszahlen wird hier 1 ausgegeben
	
}
