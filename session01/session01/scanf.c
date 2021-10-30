#include <stdio.h>

int main() {
	printf("Bitte ganze Zahl eingeben:\n");
	
	int n;
	switch (scanf("%d", &n)) {
		case EOF:
			printf("Eingabe zu ende!\n");
			return 0;
		case 1:
			printf("n=%d\n",n);
			break;
		default:
			printf("Konnte keine ganze Zahl einlesen\n");
			break;
	}

	printf("Bitte zwei Zahlen eingeben:\n");

	float f1,f2;
	switch (scanf("%f %f", &f1, &f2)) {
		case EOF:
			printf("Eingabe zu ende!\n");
			break;
		case 2:
			printf("f1=%f, f2=%f\n", f1, f2);
			break;
		case 1:
			printf("Nur eine Zahl: f1=%f\n", f1);
			break;
		default:
			printf("Konnte keine Zahl einlesen\n");
			break;
	}
}
