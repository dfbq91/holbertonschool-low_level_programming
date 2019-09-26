#include "holberton.h"

/**
* print_most_numbers - works with defined prototype variables
* Prints the numbers 0 to 9, but no except 3
*
* Return: 0
*/

void print_most_numbers(void)
{
	int s = 0;

	for (s = 0; s <= 9; s++)
	{
		if (s != 2 && s != 4)
		{
			_putchar(s + 48);
		}
	}
	_putchar('\n');
}
