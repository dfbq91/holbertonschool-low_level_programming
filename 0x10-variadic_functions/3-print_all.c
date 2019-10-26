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
			if (va_arg(list, int) == '\0')
				printf("(nil)");
			printf("%s", va_arg(list, char*));
			break;
		}
		i++;
		switch (*(format + i))
		{
		case '\0':
			printf("\n");
			break;
		default:
			if ((*(format + i) == 'c') || (*(format + i) == 'f' ||
						       (*(format + i) == 'i')) || (*(format + i) == 's'))
			{
				printf(", ");
				break;
			}
		}
	}
	va_end(list);
}
