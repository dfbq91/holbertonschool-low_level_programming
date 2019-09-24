#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int number;

	for (number = 0; number < 99; number++)
	{
		putchar(number + '0');
		if (number < 100)
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
