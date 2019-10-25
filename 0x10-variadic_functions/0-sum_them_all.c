#include "variadic_functions.h"
/**
 * sum_them_all - sum of numbers made with variadic function
 * @n: number of parameters to sum
 * Return: sum of parameters.
 */

int sum_them_all(const unsigned int n, ...) /*Recibe n como # de args a sumar*/
{
	va_list vasum; /*Declara vasum*/
	unsigned int i;
	int sum = 0;

	/*Inicializa vasum para un n número de argumentos*/

	if (n == 0)
		return (0);

	va_start(vasum, n);

	/*Accede a los argumentos asignados a vasum*/
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vasum, int);
	}
	/*Limpia la memoria asignada a vasum*/
	va_end(vasum);

	return (sum);
}
