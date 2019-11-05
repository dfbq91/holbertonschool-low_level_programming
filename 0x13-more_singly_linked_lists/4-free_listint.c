#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to head
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
