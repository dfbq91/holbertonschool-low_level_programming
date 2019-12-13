#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlinked list
 * @head: pointer to head node
 * @index: nth(index) node to be returned
 * Return: nth node given in index of NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int a = 0; /*number to compare with index*/

	current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (a == index)
			return (current);

		a++;
		current = current->next;
	}

	return (NULL);
}
