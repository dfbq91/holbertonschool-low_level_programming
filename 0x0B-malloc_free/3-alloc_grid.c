#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int pointer type variable.
 * @height: int pointer type variable.
 * Return: pointer or NULL on failure or NULL if width or height is 0.
 */

int **alloc_grid(int width, int height)
{
	int row;
	int col;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	row = 0;

	while (row < height)
	{
		arr[row] = malloc(width * sizeof(int));

		if (arr[row] == NULL)
		{
			for (col = 0; col < row; col++)
				free(arr[col]);
			free(arr);
			return (NULL);
		}
		for (col = 0; col < width; col++)
			arr[row][col] = 0;

		row++;
	}
	return (arr);
}
