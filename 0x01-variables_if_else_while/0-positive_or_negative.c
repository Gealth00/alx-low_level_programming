#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void) {

	int n;
	printf(" ");  
	scanf("%d", &n); 
 	if(n == 0) {
	printf("is zero");
	} else if( n < 0 ) {
	printf("is negative");
	} else if( n > 0 ){
	printf("is positive");
	} else{
	printf("invalid");
	}

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

return (0);
}
