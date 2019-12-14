#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node in a idx position of a dlinked list
 * @h: pointer to pointer to head node
 * @idx: is the index of the list where the new node should be added
 * @n: number of the node to be inserted
 * Return: adress of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	unsigned int a = 0; /*to compare with idx*/

	if (h == NULL)
		return (NULL);

	current = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	else
	{
		while (current->next != NULL)
		{
			if (a == idx)
			{
				new_node->n = n;
				new_node->prev = NULL;
				new_node->next = NULL;

				if (a == 0)
				{
					new_node->next = *h;
					*h = new_node;
					return (new_node);
				}

				new_node->next = current->next;
				current->next->prev = new_node;
				current->next = new_node;
				new_node->prev = current;

				return (new_node);
			}
			current = current->next;
			a++;
		}
	}
	return (NULL);
}
