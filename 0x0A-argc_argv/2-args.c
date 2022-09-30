#include <stdio.h>
#include "main.h"

/**
 * main - prints all argument it receives
 * @argc: number of arguments
 * @argv: array with the arguments
 * Return: Always 0 
 */
 
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
		
	return (0);
}
