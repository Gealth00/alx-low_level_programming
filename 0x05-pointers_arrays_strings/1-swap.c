#include "main.h"

/*
 * swap_int - swaps the value of two integers
 * @a: variable
 * @b: variable
 * Return: Always 0
*/

void swap_int(int *a, int *b)

{
	int c = *a;

	*a = *b;
	a = b;
	*b = c;
}
