#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: pointer to a newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int counter = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	while (counter < size)
	{
		hash_table->array[counter] = NULL;
		counter++;
	}

	return (hash_table);
}
