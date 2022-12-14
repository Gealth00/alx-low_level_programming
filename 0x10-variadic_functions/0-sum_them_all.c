#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns sum of all
 * @n: unsigned input
 *
 * return: Return 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	
	sum = 0;
	if (n == 0)
		return (0);

	va_start (ap, n);
	
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);
	va_end (ap);
	return(sum);
}
