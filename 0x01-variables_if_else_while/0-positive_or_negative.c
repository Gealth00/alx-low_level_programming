#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void) {

	int n;
	printf("Enter value of n: ");
	scanf("%d", &n);
	if(n == 0 ) {
	printf("%d is zero", n);
	} else if(n < 0 ) {
	printf("%d is negative\n", n);
	} else {
	printf("%d is positive\n", n);
	}

/* your code goes there */

return (0);
}
