#include "holberton.h"

/**
 * print_rev - give the lenght of a string
 *@s: int pointer type variable
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int contador = 0;
	int c = 0;
	int len;

	while (s[c] != '\0')
	{
		c++;
	}

	len = c;

	for (contador = len - 1; contador >= 0; contador--)
	{
		_putchar(s[contador]);
	}
	_putchar('\n');
}
