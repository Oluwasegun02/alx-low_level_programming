#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by new line
 * @separator: separator to print between the strings
 * @n: number of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list pro;

	va_start(pro, n);
	for(i = 0; i < n; i++)
	{
		str = va_arg(pro, char *);

		if(str)
			printf("%s", str);
		else
			printf("(nil)");
		if(i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pro);
}
