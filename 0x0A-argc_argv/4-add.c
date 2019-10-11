#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the number of arguments passed into it
 *@argc: int type. Is an argument count
 *@argv: char pointer to pointer type. Is an argument vector.
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 1;

	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *p = argv[i];

		while (*p != '\0')
		{
			if (*p < 48 || *p > 57)
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}
		sum = sum + atoi(*(argv + i));
	}
	printf("%d\n", sum);
	return (0);
}
