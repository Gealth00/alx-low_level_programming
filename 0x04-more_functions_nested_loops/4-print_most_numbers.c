#include "main.h"

/**
 * print_most_numbers - prints the numbers 0-9
 *
 * Return: Always 0.
*/

void print_most_numbers(void)

{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if ((i == 50) || (i == 52))
			i++;
		_putchar(i);
	}
	_putchar('\n');
}
