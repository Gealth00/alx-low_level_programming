#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string including the null byte to the buffer
 * @src: points to a string
 * @dest: points to the buffer
 * Return: Always 0.
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	i++;
	}
	return (dest);
}
