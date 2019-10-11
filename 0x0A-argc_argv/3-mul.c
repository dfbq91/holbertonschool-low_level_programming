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

	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[i]) * atoi(argv[i + 1]));
	return (0);
}
