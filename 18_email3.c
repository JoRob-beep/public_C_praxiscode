#include <stdio.h>
int main() {
	char input[200] = {'\0'};
	int i = 0;  
	int j = 0;
	int groesse = 0;
	int nochmal = 0;
	int nichtRichtig = 0;


	while (1) {
		i = 0;
		j = 0;
		groesse = 0;
		nochmal = 0;
		nichtRichtig = 0;

		printf("E-Mail-Validierung.\n Geben Sie die Email ein: \n");
		//fgets(input, sizeof(input), stdin);
		scanf_s("%200s", input, 200);

		for (i = 0; i < sizeof(input); i++) {  // Größe der Mailardesse
			if (input[i] == '\0') {
				groesse = i - 1;
				break;
			}
		}

		for (i = 0; i < groesse; i++) {   // Keine Sonderzeichen
			if (input[i] == ',' || input[i] == ';' || input[i] == ':' || input[i] == '(' || input[i] == ')' || input[i] == '!' || input[i] == '?') {
				printf("Keine Sonderzeichen\n");
				nichtRichtig = 1;
				break;
			}

		}
		for (i = 0; i < groesse; i++) {  //Wo ist das @? die Stelle steht im i
			if (input[i] == '@') {
				break;
			}
		}
		for (j = 0; j < groesse; j++) {
			if (input[0] == '.' || input[groesse - 1] == '.' || input[0] == '_' || input[groesse - 1] == '_' || input[0] == '-' || input[groesse - 1] == '-') {		 // Keinen Punkt oder Unterstrich am Anfang oder Ende 
				printf("Bitte keine Punkte, Unterstriche oder Bindestriche am Anfang oder Ende eingeben\n");
				nichtRichtig = 1;
				break;
			}
		}
		for (j = 0; j < groesse; j++) {
			if (input[j] == input[j - 1] && input[j] == '.' || input[j] == input[j - 1] && input[j] == '_' || input[j] == input[j - 1] && input[j] == '-') {		// Nicht mehrere Punkte schreiben
				printf("Bitte nicht mehrere Punkte eingeben\n");
				nichtRichtig = 1;
				break;
			}
		}
		if (i >= 64) {			// Email zu lang?
			printf("Der User (erster Teil der Adresse), darf nicht länger als 63 Zeichen lang sein.\n");
			nichtRichtig = 1;
		}
		if (groesse > 254) {	// Email zu lang?
			printf("Die gesamte Adresse, darf nicht länger als 254 Zeichen lang sein.\n");
			nichtRichtig = 1;
		}
		//for (j = 0; j < groesse; j++) {    // gv.at nicht erlaubt
		//	if (input[(groesse - 5)] == 'g' && input[(groesse - 4)] == 'v' && input[(groesse - 3)] == '.' && input[(groesse - 2)] == 'a' && input[(groesse - 1)] == 't') {
		//		printf("Es darf keine behoerdliche E-Mail Adresse sein. gv.at ist nicht erlaubt.");
		//		break;
		//	}
		//}
		if (nichtRichtig == 0) {
			printf("Alles richtig. Wollen Sie nochmal eingeben? Ja = 1 und Nein = 2:");
			scanf_s("%d", &nochmal);
		}
		else if (nichtRichtig ==1) {
			printf("Wollen Sie nochmal eingeben? Ja = 1 und Nein = 2:");
			scanf_s("%d", &nochmal);
		}
		//printf("%d", nochmal);
		if (nochmal != 1) {
			break;
		}

	}
	printf("Programm Ende\n");

	return 0;
}