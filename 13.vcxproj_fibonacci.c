#include <stdio.h>
void main() {
	int erste = 0;
	int zweite = 1;
	int max;
	int zwischen = 0;

	printf("Bitte geben Sie die Höchstgrenze ein:\n");
	scanf_s("%d", &max);
	printf("0 1 ");

	while (1) {
		zwischen = erste + zweite;
		if (zwischen >= max) {
			break;
		}
		else if (erste >= max) {
			break;
		}
		else if (zweite >= max) {
			break;
		}

		printf("%d ", zwischen);
		erste = zweite;
		zweite = zwischen;
	}
}