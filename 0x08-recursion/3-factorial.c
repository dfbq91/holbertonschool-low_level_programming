#include "holberton.h"

/**
* factorial - works with defined prototype variables
* Description: returns factorial of given number
*@n: int type variable
* Return: factorial
 */

int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
