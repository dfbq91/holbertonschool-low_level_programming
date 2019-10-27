#include "variadic_functions.h"
/**
 * print_strings - print strings with variadic functions
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

	va_start(list, n);

	/*Accede a los argumentos asignados a list*/
	for (i = 0; i < n; i++)
	{
		j = va_arg(list, char*);

		if (j)
		  printf("%s", j);
		else
		  printf("(nil)");
		
		if ((i + 1 != n) && (separator != NULL))
			printf("%s", separator);
	}
	/*Limpia la memoria asignada a list*/
	va_end(list);
	printf("\n");
}
