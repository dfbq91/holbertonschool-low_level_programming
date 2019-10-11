#include "holberton.h"

/**
 * getprime - return 1 if a value is a prime number.
 * Description: value if a given number is prime
 *@div: int type variable
 *@n: int type variable
 * Return: 1 if value is prime, 0 if no.
 */

int getprime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0 || n <= 1)
		return (0);
	return (getprime(n, div + 1));
}

/**
 * is_prime_number - works with defined prototype variables
 * Description: value if a given number is prime
 *@n: int type variable
 * Return: getprime.
 */

int is_prime_number(int n)
{
	return (getprime(n, 2));
}
