#include "holberton.h"

/**
* _strcat - works with defined prototype variables
* Description: concatenates two strings
*@dest: char pointer type variable
*@src: char pointer type variable
* Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; ++i)
		;

	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	return (dest);
}
