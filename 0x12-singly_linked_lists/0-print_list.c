#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list with linked lists
 * @h: pointer to head node
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t nnodes = 0;
	char *s;
	int len;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			s = "(nil)";
			len = 0;
		}
		else
		{
			s = h->str;
			len = (*h).len;
		}


		printf("[%d] %s\n", len, s);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
