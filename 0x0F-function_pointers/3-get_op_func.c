#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - plus of a and b.
 * @s: string who indicates operator
 * Return: pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	while (i < 6)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
