#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: void
*/

void print_alphabet_x10(void)
{
	int l;
	int p;

	for (p = 1; p <= 10; p++)
{
	for (l = 'a'; l <= 'z'; l++)
	putchar(l);
	putchar('\n');
}
}
