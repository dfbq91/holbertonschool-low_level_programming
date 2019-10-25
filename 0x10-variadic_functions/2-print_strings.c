#include "variadic_functions.h"
/**
 * print_numbers - sum of numbers made with variadic function
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list; /*Declara list*/
	unsigned int i;
	char *j;

	/*Inicializa list para un n número de argumentos*/

	if (separator == NULL)
		return;

	va_start(list, n);

	/*Accede a los argumentos asignados a list*/
	for (i = 0; i < n; i++)
	{
		j = va_arg(list, char*);

		if (j == NULL)
		{
			printf("(nil)");
			printf("%s", separator);
		}
		else if (i + 1 != n)
		{
			printf("%s", j);
			printf("%s", separator);
		}
		else
		{
			printf("%s\n", j);
		}
	}
	/*Limpia la memoria asignada a list*/
	va_end(list);
}
