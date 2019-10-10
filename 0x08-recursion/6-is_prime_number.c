#include "holberton.h"

/**
* is_prime_number - works with defined prototype variables
* Description: detect if a number is prime
*@n: int type variable
* Return: 1 if the input integer is a prime number, otherwise return 0
 */

int getprime(int n, int x)
{
	if (n == x)
		return (1);
	if (n % 2 == 0 || n <= 1)
		return (0);
	return (getprime(n, x + 1));
}

int is_prime_number(int n)
{
	return (getprime(n, 2));
}
