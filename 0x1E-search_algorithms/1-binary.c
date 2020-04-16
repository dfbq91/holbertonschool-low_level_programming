#include "search_algos.h"

/**
 * binary_search - use linear search to get index of an element
 * @array: array where to find
 * @size: size of the array
 * @value: value (element) to search in array
 * Return: index of value found.
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int start = 0;
	unsigned int end = size - 1;
	int mid = 0;
	unsigned int i;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array:");
		for (i = start; i < end; i++)
			printf(" %i,", array[i]);
		if (i == end)
			printf(" %i", array[i]);
		printf("\n");
		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
