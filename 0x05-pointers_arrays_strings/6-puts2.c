#include "holberton.h"

/**
 * puts2 - get odd numbers
 *@str: char pointer type variable
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;
	int len;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	i = 0;

	while (i <= len)
	{
		if (len % 2 == 1)
		{
			len = len - 1;
		}
		if (len % 2 == 0)
		{
			_putchar(str[i]);
		}
		i += 2;
	}
	_putchar('\n');
}
