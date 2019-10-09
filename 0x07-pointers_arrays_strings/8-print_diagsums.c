#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - works with defined prototype variables
* Description: sum of the two diagonals of a square matrix of integers
*@a: char pointer type variable
*@size: int type variable
* Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum_a;
	int sum_b;

	for (i = 0; i < size; i++)
	{
		if (a[i] == a[j])
			sum_a = sum_a + a[i] + a[j];
		j++;
	}

	for (j = size - 1; j > 0; j--)
	{
		if (a[i] + a[j] == size - 1)
			sum_b = sum_b + a[i] + a[j];
		i++;
	}
	printf("%d", sum_a);
	printf("%d", sum_a);
}
