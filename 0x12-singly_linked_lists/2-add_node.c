#include "lists.h"

/**
 * add_node - return number of elements in a linked list
 * @head: pointer to a pointer to head
 * *str: string to put in node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t holbcohort;
	list_t *new;
	size_t n;

	head = &holbcohort;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = stdrup(str);
	new->next = head;
	head = new;
	printf([n]
		free(new->str);
		free(new);
	size_t n;
}
