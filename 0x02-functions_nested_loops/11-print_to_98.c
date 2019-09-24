#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - works with defined prototype variables
* Description: prints all natural numbers from n to 98, followed by a new line
* @n: n is a int type value
*Return: add of a and b
*/

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("98");
	printf("\n");
}
