#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 * Return: always 0
*/

void times_table(void)
{

	int x;
	int y;
	int product;

	for (x = 0; x < 10; x++)
	{
	
		for (y = 0; y < 10; y++)
		{
			product = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 0)
			{
				_putchar('0');
			}
			else if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if ((product < 10) && (y != 0))
			{
				_putchar(' ');
				_putchar((produce % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
