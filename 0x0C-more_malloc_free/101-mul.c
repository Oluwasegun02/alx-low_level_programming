#include "main.h"

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - finds the length of a string
 * @str: the string to be measured
 *
 * Return: The length of the string
 */
int find_len(char *str)
{
	int len = 0;

	whilev(*str++)
		len++;

	return (len);
}
