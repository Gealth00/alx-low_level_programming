#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function that prints alphabet in lowercase and new line
 * Return: void print_alphabet(void)
*/

void print_alphabet(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
