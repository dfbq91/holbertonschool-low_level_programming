#include "lists.h"

/**
 * print_dlistint - print all elements of a dlinked list.
 * @h: pointer to head node
 * Return: number of elements in a linked dlistint_t list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int nnodes = 0; /*number of nodes*/

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nnodes++;
	}

	return (nnodes);
}
