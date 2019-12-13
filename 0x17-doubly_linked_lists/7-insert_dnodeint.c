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

	current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (head == NULL)
		*head = new_node;
	else
	{
		while (current->next != NULL)
			if (a == idx)
			{
				
			}
	}

}
