#include "holberton.h"

/**
 * puts_half - printf half of a string
 *@str: char pointer type variable
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;
	int len;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;

	n = len / 2;

	if (n % 2 == 0)
	{
		while (n <= len)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	if (n % 2 == 1)
	{
		while (n <= len)
                {
                        _putchar(str[n]);
                        n++;
                }
	}
	_putchar('\n');
}
