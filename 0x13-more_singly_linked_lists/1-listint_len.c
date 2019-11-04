#include "lists.h"

/**
 * listint_len - return number of elements in a linked list
 * @h: pointer to head node
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
