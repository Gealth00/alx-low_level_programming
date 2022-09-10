#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: Return 0 is successful
*/

int main(void)
{

	int n;
	int l;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar ('\n');
	return (0);
}
