#include <stdio.h>
/**
 * main - print largest prime
 *
 * Return: 0
 */

int main(void)
{
	int divisor = 2;
	long int number = 612852475143;

	while (divisor < number)
	{
		if (number % divisor == 0)
		{
			number = number / divisor;
		}
		divisor++;
	}
	printf("%li\n", number);
	return (0);
}
