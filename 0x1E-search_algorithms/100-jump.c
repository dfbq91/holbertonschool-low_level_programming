#include "search_algos.h"

/**
 * jump_search - use jump search to get index of an element
 * @array: array where to find
 * @size: size of the array
 * @value: value (element) to search in array
 * Return: index of value found.
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int low = 0;
	unsigned int high = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[high] < value && high < size)
	{
		if (array[high] == value)
			break;
		printf("Value checked array[%d] = [%d]\n", high, array[high]);
		low = high;
		high += sqrt(size);
	}

	printf("Value found between indexes [%i] and [%i]\n", low, high);

	while (low <= high && low < size)
	{
		printf(("Value checked array[%d] = [%d]\n"), low, array[low]);
		if (array[low] == value)
			return (low);
		low += 1;
	}
	return (-1);
}
