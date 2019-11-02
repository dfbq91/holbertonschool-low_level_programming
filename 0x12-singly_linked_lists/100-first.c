#include "lists.h"
/**
 * printbeforemain - a function executed before main
 * Return: nothing
 */

void printbeforemain(void) __attribute__ ((constructor))
{
	printf(You're beat! and yet, you must allow,\nI bore my house upon my back!\n)
}
