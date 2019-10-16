#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: int type variable.
 * @av: pointer to pointer char variable.
 * Return: NULL if it fails or pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	int col;

	if (grid == 0 || grid == NULL)
		return;

	for (col = 0; col < height; col++)
		free(grid[col]);
	free(grid);
}
