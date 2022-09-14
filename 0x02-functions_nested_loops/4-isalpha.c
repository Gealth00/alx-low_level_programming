#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function that checks for lowercase character
 * @c: the input character to check
 * Return: int
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
