#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - get len of a string.
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 * Return: NULL if nmemb or size is 0 or if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
