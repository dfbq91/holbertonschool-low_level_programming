#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory.
 * which contains a copy of the string given as a parameter
 * @str: char pointer type variable
 * Return: pointer or NULL if str = NULL.
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int len;
	char *p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	s = malloc(len + 1);

	if (s == NULL)
		return (NULL);
	p = s;

	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (s);
}
