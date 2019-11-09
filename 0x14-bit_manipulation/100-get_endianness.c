#include "holberton.h"

/**
 * get_endianness - get endianess of a machine.
 * Return: 1 for little endian of 0 for big endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
