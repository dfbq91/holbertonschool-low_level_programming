#include "holberton.h"

/**
*  rot13 - works with defined prototype variables
* Description: encodes a string using rot13.
*@s: char pointer type variable
* Return: char
 */

char *rot13(char *s)
{
	int i;
	int j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; a[j] != 0; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = c[j];
				break;
			}
		}
	}
	return (s);
}
