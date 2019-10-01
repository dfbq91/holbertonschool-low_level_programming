#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 *@str: char pointer type variable
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int contador = 0;
	int c = 0;
	int len;

	while (s[c] != '\0')
	{
		c++;
	}

	len = c;

	for (contador = 0; contador < len - 1; contador++)
	{
		putchar(s[contador]);
	}
	putchar('\n');

	for (contador = len - 1; contador >= 0; contador--)
	{
		putchar(s[contador]);
	}
	putchar('\n');
}
