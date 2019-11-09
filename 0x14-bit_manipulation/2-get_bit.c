#include "holberton.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: int number to convert to binary.
 * @index: index of the bit to get
 * Return: value of the bit at the index or -1 if an error ocurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int operator = 1;
	unsigned int count = 0;

	while (operator <= n)
	{
		operator <<= 1; /*Multiplico operator por dos*/
		count++;
	}
	count--;
	operator >>= 1; /* Divido operator entre dos*/

	while (operator != 0)
	{
		if (operator <= n)
		{
			n -= operator;
			if (index == count)
				return (1);
		}
		else
		{
			if (index == count)
				return (0);
		}
		count--;
		operator >>= 1;
	}
	return (-1);
}
