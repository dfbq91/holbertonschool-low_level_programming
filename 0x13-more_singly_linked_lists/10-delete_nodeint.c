#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node in a given (index) position
 * @head: pointer to pointer to head
 * @index: position where new node will be added
 * Return: adress of the new node or NULL if isn't possible to add
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current, *temp;

	current = *head;

	if (idx == 0)
	{
		current = current->next;
		free(head);
		*head = current;
	}
	else
	{
		while (count < idx - 1)
		{
			current = current->next;
			count++;
		}
		temp = current;
		head = temp;
		free(current);

	}
	return (new);
}
