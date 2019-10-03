#include "holberton.h"

/**
 * puts2 - get odd numbers
 *@str: char pointer type variable
 * Return: Always 0.
 */

void puts2(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
	{
		if (t % 2 == 0)
		{
			_putchar(str[t]);
		}
	}

	_putchar('\n');
}
