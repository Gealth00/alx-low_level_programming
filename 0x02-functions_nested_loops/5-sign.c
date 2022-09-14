#include <stdio.h>
#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 * @n: input
 * Return: Return 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
	printf("+1");
	return (1);
	}
	else if (n == 0)
	{
	printf("00");
	return (0);
	}
	else
	{
	printf("-1");
	return (-1);
	}
}
