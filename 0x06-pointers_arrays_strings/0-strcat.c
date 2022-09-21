#include "main.h"

/**
 * _strcat -> this is a function strcat
 * @dest: as first param
 * @src: second param
 * Return: a string
 */
char *_strcat(char *dest, char *src);
{
	int yen = 0, i;

	while (dest[yen])
		yen++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[yen] = src[i];
		yen += 1;
	}
	dest[yen] = '\0';
	return (dest)
}
