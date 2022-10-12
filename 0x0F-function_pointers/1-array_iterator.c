#include "function_pointers.h"

/**
 * array_iterator - Funtion that executes a parameter
 * @array: input array
 * @size: size
 * @action: array pointer
 *
 * return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for(i = 0; i < size; i++)
			action(array[i]);
}
