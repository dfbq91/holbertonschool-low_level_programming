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
	char *str, *separator = "";

	while (format != NULL)
	{
		va_start(list, format);
		while (*(format + i) != '\0')
		{
			switch (*(format + i))
			{
			case 'c':
				printf("%s%c", separator, va_arg(list, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(list, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(list, double));
				separator = ", ";
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				separator = ", ";
				break;
			}
			i++;
		}
		va_end(list);
		break;
	}
	printf("\n");
}
