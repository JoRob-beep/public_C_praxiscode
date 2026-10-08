#include <stdio.h>
void main(){
	int eingabe;
	int auf;
	int ab;
	int i;

	printf("Wollen Sie die Zahlen aufsteigend (1) oder absteigend (25) haben? (Geben Sie 1 oder 25 ein)\n");
	scanf_s("%d", &eingabe);

	if (eingabe == 1) {
		for (i = 1; i < 26; i++) {
			printf("%d\n", i);
		}
	}
	else if (eingabe == 25) {
		for (i = 25; i > 0; i--) {
			printf("%d\n", i);
		}
	}
	else {
		printf("Bitte machen Sie eine gültige Eingabe");
	}
}