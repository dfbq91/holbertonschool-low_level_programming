#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *@argc: int type. Is an argument count
 *@argv: char pointer to pointer type. Is an argument vector.
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
