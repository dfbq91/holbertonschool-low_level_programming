#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: pointer to pointer to head
 * Return: adress of the new node or NULL if isn't possible to add
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	temp = *head;

	if (*head == NULL)
		return (0);

	n = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;

	return (n);
}
