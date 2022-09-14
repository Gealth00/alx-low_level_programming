#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that print the last digit of a number
 * @x: The input number to check
 * Return: int
*/

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	printf("%d", l);
	return (l);
}
