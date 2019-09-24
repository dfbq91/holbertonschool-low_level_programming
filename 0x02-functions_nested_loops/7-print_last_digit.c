#include "holberton.h"

/**
* print_last_digit - works with defined prototype variables
* Print last digit of a number
* @j : is a int type variable
* Return: j as a last digit of a number
*/

int print_last_digit(int j)
{
	int a;

	a = j % 10;
	if (a < 0)
	{
		a = (a * -1);
	}
	_putchar(a + '0');
	return (a);
}
