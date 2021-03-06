#include "lists.h"

/**
 * add_dnodeint - add a node at the end of a dlinked list.
 * @head: pointer to pointer to head node
 * @n: value of node to be added
 * Return: address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = current;
	current->prev = new_node;
	*head = new_node;

	return (new_node);

}
