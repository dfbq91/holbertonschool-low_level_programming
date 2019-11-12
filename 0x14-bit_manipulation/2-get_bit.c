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

	if (index > sizeof(n) * 8)
		return (-1);
	operator <<= index;
	if (operator & n)
		return (1);
	else
		return (0);
}
