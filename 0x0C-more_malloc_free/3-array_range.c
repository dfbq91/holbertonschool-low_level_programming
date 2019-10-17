#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *array_range - make an array in heap.
 * @min: min value
 * @max: max value
 * Return: NULL if min > max  or if it fails
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
