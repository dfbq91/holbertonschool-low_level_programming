#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * firstlen - get len of a string.
 * @s1: string to get the lenght
 * Return: len of a string.
 */

int firstlen(char *s1)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		;

	return (i);
}

/**
 * *string_nconcat - allocates memory using malloc.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of character of second string if n < s2
 * Return: pointer to the allocate memory or 98 if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len3;
	unsigned int i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = firstlen(s1);
	len2 = firstlen(s2);

	if (n < len2)
		len2 = n;

	len3 = len1 + len2 + 1;
	ptr = malloc(len3);
	if (ptr == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}

	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
	{
		*(ptr + i) = *(s2 + j);
	}

	ptr[i] = '\0';
	return (ptr);
}
