#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using function pointer.
 * @name: name to print
 * @f: function pointer
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);

}
