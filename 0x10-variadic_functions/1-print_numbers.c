#include "variadic_functions.h"
/**
 * print_numbers - sum of numbers made with variadic function
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list; /*Declara list*/
	unsigned int i;

	/*Inicializa list para un n número de argumentos*/

	va_start(list, n);

	/*Accede a los argumentos asignados a list*/
	for (i = 0; i < n; i++)
	{
		if ((i + 1 != n) && separator != NULL)
		{
			printf("%d", va_arg(list, int));
			printf("%s", separator);
		}
		else
		{
			printf("%d", va_arg(list, int));
		}
	}
	printf("\n");
	/*Limpia la memoria asignada a list*/
	va_end(list);
}
