#include "holberton.h"

/**
* _strncpy - works with defined prototype variables
* Description: function that copies a string
*@dest: char pointer type variable
*@src: char pointer type variable
*@n: int variable (bytes)
* Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
