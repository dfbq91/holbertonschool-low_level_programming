#include "holberton.h"

/**
* reverse_array - works with defined prototype variables
* Description: reverses the content of an array of integers
*@a: int pointer type variable
*@n: int type variable
* Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
