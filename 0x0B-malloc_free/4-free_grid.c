#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid -  frees a 2 dimensional grid previously created by other function.
 * @grid: int pointer grid.
 * @height: int pointer type variable.
 * Return: memory cleaned.
 */

void free_grid(int **grid, int height)
{
	int col;

	if (grid == 0 || grid == NULL)
		return;

	for (col = 0; col < height; col++)
		free(grid[col]);
	free(grid);
}
