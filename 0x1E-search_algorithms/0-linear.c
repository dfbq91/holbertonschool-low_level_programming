#include "search_algos.h"

/**
 * linear_search - use linear search to get index of an element
 * @array: array where to find
 * @size: size of the array
 * @value: value (element) to search in array
 * Return: index of value found.
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
