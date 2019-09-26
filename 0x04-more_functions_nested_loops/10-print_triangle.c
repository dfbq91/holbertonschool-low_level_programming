#include "holberton.h"

/**
* print_line - works with defined prototype variables
* draws a straight line in the terminal
*@n: int type variable
* Return: 0
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');

	}
	_putchar('\n');
}
