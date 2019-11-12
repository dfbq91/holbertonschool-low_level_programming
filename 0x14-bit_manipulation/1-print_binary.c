#include "holberton.h"


/**
 * print_binary - get the value of a bit at a given index
 * @n: int number to convert to binary.
 * return: nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int operator = 2;

	while (operator <= n)
	{
		operator <<= 1; /*Multiplico operator por dos*/
	}

	operator >>= 1; /* Divido operator entre dos*/

	while (operator != 0)
	{
		if (operator <= n)
		{
			n -= operator;
			_putchar ('1');
		}
		else
		{
			_putchar('0');
		}
		operator >>= 1;
	}
}
