#include "main.h"

/*
 * print_rev(char *s) - print string in reverse
 *
 * return: always 0
*/

void print_rev(char *s)
{
	int i = 0;
	int r = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	for (r = i - 1; r >= 0; r--)
	{
		_putchar(r);
	}
	_putchar('\n');
}
