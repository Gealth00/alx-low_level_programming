#include <stdio.h>
#include "main.h"

/**
 * prit_alphabet - function that prints the alphabet, in lowercase and a new line
 * Return: void print_alphabet(void)
*/

void print_alphabet(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
