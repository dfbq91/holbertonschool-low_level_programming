#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to head node to be freed
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
