#include "holberton.h"
#include <stdio.h>
/**
* _strchr - works with defined prototype variables
* Description: locates a character in a string
*@s: char pointer type variable
*@c: char type variable
* Return: pointer a pointer of null if isn't match
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
