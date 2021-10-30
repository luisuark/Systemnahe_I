#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int computeAliquot(int num){
	srand(getpid());
	int randomNumber = rand() % num;
	for(int i =randomNumber; i > 0; i--){
		if(num%i == 0){
			return i;
		}
	}
	return computeAliquot(num);
}

int main() {
	srand(time(NULL) ^ getpid());

	printf("*** Aliquot Game ***\n");
	int num = rand() % 100;
	int input = 0;
	int counter = 0;
	_Bool myTurn = 1;

	while(num > 1) {
		myTurn = counter % 2 == 0;	
		printf("Number: %d\n", num);

		if(myTurn) {
			printf("Your move: ");
			if(scanf("%d",&input) != 1) {
				exit(1);
				break;
					case 1:
						printf("gültige EIngabe\n");
						break;
					case 0:
						exit(1);
						break;
				}

			while(num%input != 0 || input == num){
				printf("%d is not a proper divisor of %d!\n",input,num);
				printf("Your move: ");
				switch(scanf("%d",&input)) {
					case EOF:
						exit(1);
						break;
					case 1:
						printf("gültige EIngabe\n");
						break;
					case 0:
						exit(1);
						break;
				}
			}
		}
		else{
			printf("My move: ");
			input = computeAliquot(num);	
			printf("%d\n", input);
		}
		num = num - input;
		counter++;
	}
	if(myTurn){
		printf("You lose!\n");
		
	}
	else{
		printf("I lose!\n");

	}
	return 0;
}
