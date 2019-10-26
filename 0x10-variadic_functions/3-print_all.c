#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: print format passed to the function
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;

	va_start(list, format);

	while (*(format + i) != '\0')
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			printf("%s", va_arg(list, char*));
		}
		i++;
		switch (*(format + i))
		{
		default:
			if (((*(format + i) == 'c') || (*(format + i) == 'f') ||
			     (*(format + i) == 'i') || (*(format + i) == 's')) &&
			    (*(format + i) != '\0'))
			{
				printf(", ");
				break;
			}
		}

	}
	printf("\n");
	va_end(list);
}
