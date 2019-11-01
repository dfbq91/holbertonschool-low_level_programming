#include "lists.h"

/**
 * add_node_end - return number of elements in a linked list
 * @head: pointer to a pointer to head
 * @str: string to put in node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;
	list_t *traverse;

	len = getlenght(str);
	new = malloc(sizeof(list_t)); /*Reservo espacio en memoria dinámica*/
	if (new == NULL)
		return (NULL);
	new->len = len;
	new->str = strdup(str);
	new->next = NULL;
	if (*head == NULL)
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
/**
 * getlenght - return number of elements in a linked list
 * @str: pointer to a pointer to head
 * Return: lenght of the string
 */

unsigned int getlenght(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
