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
        int sum_a = 0;
        int sum_b = 0;

        for (i = 0; i < size; i++)
        {
                sum_a = sum_a + a[(size + 1) * i];
        }
        for (j = 0; j < size; j++)
        {
                sum_b = sum_b + a[(size - 1) * (j + 1)];
        }
        printf("%d, %d\n", sum_a, sum_b);
}
