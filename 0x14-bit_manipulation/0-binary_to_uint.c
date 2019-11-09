#include "holberton.h"


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number of 0 if it is NULL or if its't 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	int power = 0;
	int len = 0;
	unsigned int convnumber = 0;


	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);
		len++;
	}
	len--;

	while (len >= 0)
	{
		if (b[len] == 49)
		{
			convnumber += 1 << power;
		}
		power++;
		len--;
	}
	return (convnumber);
}
