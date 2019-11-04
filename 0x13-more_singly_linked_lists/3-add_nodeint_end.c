#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to a pointer to head
 * @n: int to put in node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *traverse;

	new = malloc(sizeof(listint_t)); /*Nodo creado en memoria dinámica*/

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = NULL;
	if (*head == NULL) /*Iguala al último nodo agregado y lo retorna*/
	{
		*head = new;
		return (*head);
	}

	traverse = *head;

	while (traverse->next != NULL)
		traverse = traverse->next;

	traverse->next = new;
	new->next = NULL;

	return (*head);
}
