#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list vlist;

	va_start(vlist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(vlist, int);
	va_end(vlist);
	return (sum);
}
