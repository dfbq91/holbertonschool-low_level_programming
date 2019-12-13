#include "lists.h"

/**
 * dlistint_len - return number of elementos of a dlinked list.
 * @h: pointer to head node
 * Return: number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int nnodes = 0; /*number of nodes*/

	current = h;

	while (current != NULL)
	{
		current = current->next;
		nnodes++;
	}

	return (nnodes);
}
