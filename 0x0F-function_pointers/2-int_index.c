#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: input array
 * @size: Size of array
 * @cmp: pointer to the function
 *
 * return: index of first element or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
