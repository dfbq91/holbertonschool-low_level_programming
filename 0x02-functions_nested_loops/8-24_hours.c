#include "holberton.h"

/**
* jack_bauer - works with defined prototype variables
* Print all minuts in a day
* @j : is a int type variable
* Return: j as a last digit of a number
*/

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(58);
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
			}
		}
	}
}
