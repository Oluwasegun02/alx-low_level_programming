#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: first parameter
 *
 * Return: 0  or the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list pro;

	va_start(pro, n);

	if(n != 0)
	{
		for(i = 0; i < n; i++)
			sum += va_arg(pro, int);
	}
	va_end(pro);

	return (sum);
}
