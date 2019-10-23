#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints a name using function pointer.
 * @array: array to print
 * @size: size of array
 * @action: pointer to the function to use
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL || array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
