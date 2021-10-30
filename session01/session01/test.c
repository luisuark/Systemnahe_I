#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


int main() {
	srand(time(NULL));
	for(int i = 10; i > 0; i--) {
		printf("%d\n", i);
	}
	printf("3 mod 1 = %d\n", 3%1);
	printf("random mod 2 = %d\n", rand()%2);
	return 0;
}	
