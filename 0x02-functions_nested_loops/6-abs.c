#include "holberton.h"

/**
* _abs - works with defined prototype variables
* Show absolute value of a number
* @n : is a int type variable
* Return: n as an abs absolute integer value
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n = (n * -1);
		return (n);
	}
}
