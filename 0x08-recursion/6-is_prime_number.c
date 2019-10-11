#include "holberton.h"

/**
* _pow_recursion - works with defined prototype variables
* Description: value of x raised to the power of y
*@x: int type variable
*@y: int type variable
* Return: return a power of a given number
 */

int getprime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0 || n <= 1)
		return (0);
	return (getprime(n, div + 1));
}

int is_prime_number(int n)
{
	return (getprime(n, 2));
}
