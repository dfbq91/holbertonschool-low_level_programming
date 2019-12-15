#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node in a idx position of a dlinked list
 * @head: pointer to pointer to head node
 * @index: is the index of the list where the new node should be added
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *todelete = *head;
	unsigned int a = 0; /*to compare with index*/

	if (*head == NULL || head == NULL)
		return (-1);

	while (current != NULL)
	{
		if (a == index)
		{
			if (a == 0) /*for node to delete at the beggining*/
			{
				if (current->next == NULL)
				{	*head = NULL;
					return (-1);
				}
				current = current->next;
				*head = current;
				free(current->prev);
				current->prev = NULL;
				return (1);
			}
			if (current->next == NULL) /*for node to delete at the end*/
			{	current = current->prev;
				free(todelete);
				current->next = NULL;
				return (1);
			}
			current = current->next;
			todelete = todelete->prev;
			todelete->next->next->prev = todelete;
			free(todelete->next);
			todelete->next = current;
			return (1);
		}
		current = current->next;
		todelete = todelete->next;
		a++;
	}
	return (-1);
}
