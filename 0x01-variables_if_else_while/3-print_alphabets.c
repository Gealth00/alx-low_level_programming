#include <stdio.h>
#include <ctype>

/**
 *  * main - program that prints the alphabet in lowercas and uppercase,
 *   * You can only use the putchar
 *    * Return: 0
*/

int main(void)
	int l,z;
	
	while (l <= 'z')
	{
		putchar(l);
		l+=1;
	}
	while (z <= 'Z')
	{
		putchar(z);
		z+=1;
	}
	putchar ('\n');
	return (0);

