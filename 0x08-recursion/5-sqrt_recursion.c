#include "holberton.h"

/**
* _sqrt - works with defined prototype variables.
* Description: value if a given number has sqrt
*@mul: int type variable.
*@n: int type variable
* Return: natural square root of a number or -1 if it does not have.
 */

int _sqrt(int n, int mul)
{
	if (n < 0 || mul * mul > n)
		return (-1);
	if (mul * mul == n)
		return (mul);
	return (_sqrt(n, mul + 1));
}

/**
 * _sqrt_recursion - works with defined prototype variables
 * Description: will return value of a variable raised in another
 *@n: int type variable
 * Return: sqrt.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
