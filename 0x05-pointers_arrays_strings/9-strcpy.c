#include "holberton.h"

/**
 * _strcpy - copy a string into a buffer pointed
 * @dest: char type array pointer
 * @src: char type integer variable
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
