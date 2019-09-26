#include "holberton.h"

/**
* print_diagonal - works with defined prototype variables
* draws a diagonal line on the terminal
*@n: int type variable
* Return: 0
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i > j)
				{
					_putchar(' ');
				}
				else if (i == j)
				{
				_putchar(92);
				_putchar('\n');
				}
			}
		}
	}
}
