#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers: print the number of integers,followedvby new line
 * @separator: separator to print between numbers
 * @n: number of numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pro;
	unsigned int i;

	va_start(pro, n);
	for(i = 0; i < n; i++)
	{
		num = va_arg(valist, int);
		printf("%d", num);

		if(i < n - 1 && seperator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pro);
}
