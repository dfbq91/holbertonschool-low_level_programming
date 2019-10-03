#include "holberton.h"

/**
* _strcmp - works with defined prototype variables
* Description: function that copies a string
*@s1: char pointer type variable
*@s2: char pointer type variable
* Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0, j = 0; s1[i] != '\0' && s1[j] != '\0'; i++, j++)
	{
		if (s1[i] == s2[j])
		{
			return (s1[i] - s2[j]);
		}
		else if (s1[i] < s2[j])
		{
			return (s1[i] - s2[j]);
		}
		else
		{
			return (s1[i] - s2[j]);
		}
	} return (0);
}
