#include "main.h"

/*
 * print_rev - print string in reverse
 * @s: string
 * return: always 0
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
