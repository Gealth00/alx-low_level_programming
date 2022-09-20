#include "main.h"

/**
 * rev_string - reverse a string
 * @s: varaible
 * Return: void
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i--; i >= 0; i--)
	_putchar(i);
}
