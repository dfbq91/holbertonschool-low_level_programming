#include "holberton.h"

/**
* print_numbers - works with defined prototype variables
* Prints the numbers 0 to 9
*
* Return: 0
*/

void print_numbers(void)
{
	int s = 0;

	for (s = 0; s <= 9; s++)
	{
	_putchar(s + 48);
	}
	_putchar('\n');
}
