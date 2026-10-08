#include <stdio.h>
float averageCalc(float grade[], int howMany);
void main() {
	
	int howMany;
	float grade[20];
	float gradeInput;
	int i;

	printf("Durchschnittsberechnung.\n Wie viele wollen Sie berechnen? (Max. 20):");
	scanf_s("%d", &howMany);
	
	for (i = 0; i < howMany; i++) {
		gradeInput = 0;
		printf("Geben Sie Note %d ein:", (i+1));	// gradeInput
		scanf_s("%f", &gradeInput);

		grade[i] = gradeInput;		//in ein Array speichern / schreiben

		if (howMany > 20) {
			printf("Nur 20 erlaubt. Programm wird geschlossen");
		}
	}	
	float average = averageCalc(grade, howMany);
	printf("Der Durchschnitt ist: %.2f", average);
}
float averageCalc(float grade[], int howMany) {
	float average = 0;
	int i;
	float temp = 0;

	for (i = 0; i < howMany; i++) {
		temp = temp + grade[i];
	
	}
	average = temp / howMany;
	return average;
}