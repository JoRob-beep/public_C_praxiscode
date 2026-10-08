#include <stdio.h>
void main() {
	double laenge;
	double breite;
	double antwort;
	double flaeche;
	double umfang;

	printf("Bitte geben Sie die Länge ein (max. 9 stellig): ");
	scanf_s("%lf", &laenge);
	printf("Bitte geben Sie eine Breite ein (max. 9 stellig): ");
	scanf_s("%lf", &breite);
	printf("Wollen Sie die Flaeche (1) oder den Umfang (2) berechnen? Drücken Sie 1 oder 2");
	scanf_s("%lf", &antwort);

	if (antwort == 1) {
		flaeche = laenge * breite;
		printf("Die Flaeche beträgt: %.2lf\n", flaeche);
		printf("Berechnung: Laenge * Breite");
	}
	else if(antwort == 2){
		umfang = 2 * laenge + 2 * breite;
		printf("Der Umfang betraegt: %.2lf\n", umfang);
		printf("Berechnung: 2x die Laenge + 2x die Breite");
	}
	else {
		printf("Ihre Eingabe war falsch ( %.2lf )", antwort);
	}
	
} 
