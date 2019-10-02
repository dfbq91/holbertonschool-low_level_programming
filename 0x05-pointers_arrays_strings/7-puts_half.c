#include "holberton.h"

/**
 * puts_half - printf half of a string
 *@str: char pointer type variable
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int len;
	int n;
	int c;

	while (str[c] != '\0')
	{
		c++;
	}
	len = c;

	len = len + 1;

	for (n = len / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
