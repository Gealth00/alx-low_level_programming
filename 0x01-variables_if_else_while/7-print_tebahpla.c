#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 * Return: return zero it  is sucessful
*/

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
