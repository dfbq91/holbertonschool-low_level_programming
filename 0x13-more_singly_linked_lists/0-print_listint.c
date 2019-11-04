#include "lists.h"

/**
 * print_listint - prints all the elements of a listint list with linked lists
 * @h: pointer to hello node
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;
	int intnumber = 0;

	while (h != NULL)
	{
		intnumber = (*h).n;

		printf("%d\n", intnumber);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
