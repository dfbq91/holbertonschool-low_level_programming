#include <stdio.h>
/**
 * main -print sum of 5 and 3 integers
 *
 * Return: 0
 */
int main(void)
{
	int fivemultiples = 3;
	int threemultiples = 5;
	int suma = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % threemultiples == 0 && i % fivemultiples == 0)
		{
			suma = suma + i;
		}
		else if (i % fivemultiples == 0)
		{
			suma = suma + i;
		}
		else if (i % threemultiples == 0)
		{
			suma = suma + i;
		}
	}
	printf("%d\n", suma);
	return (0);
}
