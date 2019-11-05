#include "lists.h"

/**
 * insert_nodeint_at_index - inserta a node in a given (index) position
 * @head: pointer to pointer to head
 * @n: int value to new node
 * @idx: position where new node will be added
 * Return: adress of the new node or NULL if issn't possible to add the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current;
	listint_t *new;
	listint_t *temp;

	current = *head;
	temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while(current)
		{
			if (count == idx - 1)
			{
				temp = current->next;
				current->next = new;
				new->next = temp;
				break;
			}
		current = current->next;
		count++;
		}
		if (idx > count)
		{
			free(new);
			return (NULL);
		}
	}

	return (new);
}
