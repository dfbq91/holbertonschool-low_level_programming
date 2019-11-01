#include "lists.h"

/**
 * add_node - return number of elements in a linked list
 * @head: pointer to a pointer to head
 * *str: string to put in node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	len = getlenght(str);
	new = malloc(sizeof(list_t)); /*Reservo espacio en memoria dinámica*/
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len; 
	new->next = *head;
	*head = new;
	return (*head);
	
}
/**
 * getlenght - return number of elements in a linked list
 * @*str: pointer to a pointer to head
 * Return: lenght of the string
 */
unsigned int getlenght(const char *str)
{
  unsigned int len = 0;
  
  while (str[len] != '\0')
    len++;
  return(len);
}
