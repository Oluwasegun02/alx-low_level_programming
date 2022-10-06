#include <stdlib.h>
#include "main.h"
/**
 * array_range - create an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created array
 * NULL if malloc fail
 * NULL if min > max
 */
int *array_range(int min, int max)
{
	int range, i;
	int *p;

	range = o;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
