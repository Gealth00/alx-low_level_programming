#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main- entry for variable if else statement
 * Return: Always return zero
*/

int main(void)

{
int n;
int l;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10
/* your code goes there */
	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", l);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", l);
	else
		printf("Last digit of %d is %d and is less than 6 snd not 0\n", l);

return (0);

}
