#include <stdio.h>
//#include <locale.h>
int main() {
	//setlocale(LC_ALL, "");  //Setzt auf die Standardsprache des Systems
	char eingabeZahl[9];
	int zahl;
	//int abfrage = 100;
	printf("Bitte geben Sie eine Zahl ein (max. 9 stellig): ");
	fgets(eingabeZahl, sizeof(eingabeZahl), stdin);
	zahl = atoi(eingabeZahl);  //Konvertiert den String in eine Zahl
	if (zahl > 99){
		if (zahl > 100) {
			if (zahl > 200) {
				printf("Deine Zahl ist größer als 200");
			} 
			else{
				printf("Deine Zahl ist größer als 100");
			}
		}
		else if (zahl == 100) {
			printf("Deine Zahl ist 100");
		}
	}
	return 0;
}
