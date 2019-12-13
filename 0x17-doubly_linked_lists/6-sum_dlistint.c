#include "lists.h"

/**
 * sum_dlistint - returns sum of int values of nodes
 * @head: pointer to head node
 * Return: sum of all data of nodes or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int suma = 0;

	current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		suma = suma + current->n;
		current = current->next;
	}

	return (suma);
}
