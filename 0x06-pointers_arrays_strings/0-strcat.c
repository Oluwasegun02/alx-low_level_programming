#include "main.h"
#include <string.h>

/**
 * _strcat -> this is a function strcat
 * @dest: as first param
 * @src: second param
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
