#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: unsigned int value to allocate in heap
 * Return: pointer to the allocate memory or 98 if it fails.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
