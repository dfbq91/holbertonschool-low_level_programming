#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to a pointer to head
 * Return: nothing
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head->next);
		head = head->next;
	}
}
