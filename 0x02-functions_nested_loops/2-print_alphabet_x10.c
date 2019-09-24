#include "holberton.h"

/**
* print_alphabet_x10 - works with defined prototype variables
*
* Description: Print an alphabet ten times
* Return: sucessful alphabet
*/

void print_alphabet_x10(void)
{
	char f;
	int d = 0;

	for (d = 1; d <= 10; d++)

	{
		f = 'a';
		for (f = 'a'; f <= 'z'; f++)
		{
			_putchar(f);
		}
		_putchar('\n');
	}
}
