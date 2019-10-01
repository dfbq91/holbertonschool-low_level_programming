#include "holberton.h"

/**
 * rev_string - function that reverses a string
 *@s: char pointer type variable
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int c = 0;
	int d;
	char aux;
	int len;

	while (s[c] != '\0')
	{
		c++;
	}

	len = c;

	d = len - 1;
	c = 0;

	while (c <= d)
	{
		aux = s[c];
		s[c] = s[d];
		s[d] = aux;
		c++;
		d--;
	}
}
