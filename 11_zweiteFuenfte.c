#include <stdio.h>
void main() {
	int auswahl;
	int i;
	printf("Soll jede zweite oder jede 5te Zahl ausgegeben werden? (2 oder 5 eingeben!):\n");
	scanf_s("%d", &auswahl);
	if (auswahl == 2) {
		for (i = 1; i <= 50; i++) {
			if (i % 2 == 0) {
				printf("%d\n", i);
			}				
		}
	}
	else if(auswahl == 5) {
		printf("%d\n", 1);
		for (i = 5; i <= 50; i++) {
			if (i % 5 == 0) {
				printf("%d\n", i);
			}
		}
	}
}