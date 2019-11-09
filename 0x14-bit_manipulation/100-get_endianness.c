#include "holberton.h"

/**
 * flip_bits - returns number of bits fliped from one to another number.
 * @n: first binary number.
 * @m: second binary number.
 * Return: number of bits fliped
 */


int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char*) & i;
	if (*c)
		return (0);
	else
		return (1);
}
