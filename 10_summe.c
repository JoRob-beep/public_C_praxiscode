#include <stdio.h>
void main() {
	int vari = 1;
	int zahl1;
	int zahl2;
	int zahl3;
	int i = 0;
	printf("Geben sie die erste Zahl ein:\n");
	scanf_s("%d", &zahl1);
	printf("Geben sie die zweite Zahl ein:\n");
	scanf_s("%d", &zahl2);
	printf("Geben sie die dritte Zahl ein:\n");
	scanf_s("%d", &zahl3);

	do{
		vari = vari + zahl1 + zahl2 + zahl3;
		if (vari >= 1000000) {
			break;
		}
		i++;
	} while (i < 1000000);
	i = i + 1;
	printf("Sie haben: %dmal summiert", i);
}