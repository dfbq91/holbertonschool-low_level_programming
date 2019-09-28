#include <stdio.h>
/**
 * main - prints the sum of Fibonacci sequence whose values
 * do not exceed 4000000
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	int i;
	long int c;
	long int suma;

	suma = a + b;
	for (i = 0; i <= 29; i++)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			suma = suma + c;
		}
		a = b;
		b = c;

	}
	printf("%li", suma - 1);
	printf("\n");
	return (0);
}
