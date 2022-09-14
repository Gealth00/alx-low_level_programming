#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: void
*/

void print_alphabet_x10(void)

{
int l;
int n;

for (n = 1; n <= 10; n++)
	{
	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
		putchar('\n');
	}
}
