#include <stdio.h>
int main() {
	char eingabeZahl[7];
	printf("Bitte geben Sie eine Zahl ein (max. 7 stellig): ");
	fgets(eingabeZahl, sizeof(eingabeZahl), stdin);  //stdin steht für Standardinput.
	printf("Deine Zahl: %s", eingabeZahl);
	return 0;
}