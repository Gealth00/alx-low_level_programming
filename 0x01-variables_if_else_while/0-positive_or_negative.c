#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void) {

	int n;
	if(n == 0 ) {
	printf("is zero\n");
	} else if(n < 0 ) {
	printf("is negative\n");
	} else {
	printf("is positive\n");
	}
	
	srand(time(0));

	n = rand() - RAND_MAX / 2;

/* your code goes there */

return (0);
}
