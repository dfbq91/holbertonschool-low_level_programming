#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to a pointer to head
 * Return: nothing
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
	}
	free(head);
}
