#include "holberton.h"

/**
 * flip_bits - returns number of bits fliped from one to another number.
 * @n: first binary number.
 * @m: second binary number.
 * Return: number of bits fliped
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;

	n ^= m;

	/*Asigné a n los bits que cambian entre m y n. Si hay un 1, cambió*/

	while (n)
	{
		if (n & 1) /*Multiplico n con 1 para saber si LSB bit cambió*/
			counter++;
		n >>= 1; /* Desplazo a la derecha para comparar cada bit de n*/
	}
	return (counter);
}
