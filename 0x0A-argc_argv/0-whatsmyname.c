#include <stdio.h>
/**
 * main - function  that prints its name, followed by a new line
 * @argc: is an argument counter for int
 * @argv: is an argument value for char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
