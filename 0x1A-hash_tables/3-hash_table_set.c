#include "hash_tables.h"

/**
  * hash_table_set - adds an element to the hash table
  * @value: value associated with the key, must be duplicated.
  * @key: is the key. key can not be an empty string
  * @ht: hash table you want to add or update the key/value
  * Return: 1 if it succeeded, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *lklist = NULL;
	unsigned long int index = 0;

	if (!key || !value || !ht || *key == '\0' || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	lklist = ht->array[index];

	if (lklist != NULL)
	{
		while (lklist != NULL)
		{
			if (!strcmp(lklist->key, key))
			{
				free(lklist->value);
				free(new_node);
				lklist->value = strdup(value);
				if (lklist->value == NULL)
					return (0);
				return (1);
			}
			lklist = lklist->next;
		}
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
