#include <stdio.h>

/**
 * having a function that executed frist before the main function
 * print some couple of string with new line
 */

void __attribute__((constructor)) write()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
