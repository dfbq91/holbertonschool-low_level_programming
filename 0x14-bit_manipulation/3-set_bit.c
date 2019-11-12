#include "holberton.h"

/**
 * set_bit - get the value of a bit at a given index
 * @n: binary number.
 * @index: index where the value will be get
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int operator = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	operator <<= index;

	*n += operator;
	return (1);
}
