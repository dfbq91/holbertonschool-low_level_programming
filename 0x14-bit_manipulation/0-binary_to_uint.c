#include "holberton.h"


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number of 0 if it is NULL or if its't 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int j;
	unsigned int convnumber;

	for (j = 0, i = 0; b[j] != '\0' || i < 32; b++, i++)
	{
		if (b[i] != 0 || b[i] != 1 || b == NULL)
			return (0);

		convnumber += b[j] * pow(2, i);
	}
	return (convnumber);

}
