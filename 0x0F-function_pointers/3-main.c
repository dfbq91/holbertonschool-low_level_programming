#include <stdio.h>
#include "3-calc.h"

/**
 * main - main function.
 * @argc: number of parameters
 * @argv: each parameter
 * Return: pointer to the function
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*p)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((p == op_div || p == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = p(a, b);

	printf("%d\n", result);

	return (0);
}
