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
	printf("+\n");
	return (1);
	}
	else if (n == 0)
	{
	printf("0\n");
	return (0);
	}
	else
	{
	printf("-\n");
	return (1);
	}
}
