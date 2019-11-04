#include "lists.h"
/**
 * add_nodeint - add a node at the beggining of the list
 * @head: pointer to a pointer to head
 * @n: int to put in node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t)); /*Reservo espacio en memoria dinámica*/

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = *head;
	*head = new;

	return (*head);
}
