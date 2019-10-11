#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *@argc: int type. Is an argument count
 *@argv: char pointer to pointer type. Is an argument vector.
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	int i;

	for (i = 0; i != argc; i++)
		printf("%s\n", *(argv + i));
	return (0);
}
