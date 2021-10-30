#include <stdio.h>

#include <stdlib.h> 
#include <time.h>
#include <unistd.h>

int main() {
	srand(time(NULL) ^ getpid());

	printf("Wie häufig soll gewürfelt werden?\n");
	int n;
	int sum=0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int j = rand() % 6 + 1;
		printf("Würfel Nr. %d zeigt %d\n", i, j );
		sum = sum + j; 
	}
	
	float avg = (float)sum/n;	

	printf("Die Summe beträgt: %d\n Die duchschnittliche Augenzahl betraegt: %f\n", sum, avg);
}	

