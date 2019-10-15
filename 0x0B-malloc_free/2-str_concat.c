#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *str_concat - concatenate two strings with malloc.
 * @s1: char pointer type variable. First string
 * @s2: char pointer type variable. Second string to concatenate with s1.
 * Return: NULL if S1 or S2 is NULL or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	int s3;
	char *a;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;

	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	s3 = len_s1 + len_s2 + 1;
	a = malloc(s3);

	if (a == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		a[i] = *s1;
		s1++;
		i++;
	}

	while (*s2 != '\0')
	{
		a[i] = *s2;
		s2++;
		i++;
	}
	a[i] = '\0';
	return (a);
}
