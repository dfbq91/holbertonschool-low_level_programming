#include "lists.h"

/**
 * sum_listint - returns sum of all data (n) of a linked list.
 * @head: pointer to head
 * Return: sum or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += (*current).n;
		current = current->next;
	}
	return (sum);
}
