#include "search_algos.h"

/**
 * interpolation_search - use interpolation search to get index of an element
 * @array: array where to find
 * @size: size of the array
 * @value: value (element) to search in array
 * Return: index of value found.
 */

int interpolation_search(int *array, size_t size, int value)
{
	unsigned int low = 0;
	unsigned int high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	pos = low + (((double)(high - low) /
			     (array[high] - array[low])) *
			    (value - array[low]));
	if (pos > size - 1)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;

		pos = low + (((double)(high - low) /
			      (array[high] - array[low])) *
			     (value - array[low]));
	}

	return (-1);
}
