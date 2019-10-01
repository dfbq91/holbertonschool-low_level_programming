#include "holberton.h"

/**
 * puts2 - get odd numbers
 *@s: char pointer type variable
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		str++;
	}
	_putchar('\n');
}
