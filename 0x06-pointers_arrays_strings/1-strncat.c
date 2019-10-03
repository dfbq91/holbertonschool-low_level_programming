#include "holberton.h"

/**
* _strncat - works with defined prototype variables
* Description: concatenates two strings
*@dest: char pointer type variable
*@src: char pointer type variable
*@n: int variable (bytes)
* Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; ++i)
		;

	for (j = 0; j < n && src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	return (dest);
}
