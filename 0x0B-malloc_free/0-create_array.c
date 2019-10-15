#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - creates an array of chars, and initializes it with a char.
 * @size: unsignet int, size of array of chars
 * @c: char type variable. An specific char to initialize array
 * Return: Null if size = 0 or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(c));
	while (i <= size)
	{
		str[i] = c;
		i++;
	}

	if (str == NULL)
		return (NULL);

	return (str);
}
