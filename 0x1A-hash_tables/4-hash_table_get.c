
#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key.
  * @ht: hash table
  * @key: key looked
  * Return: value associated with element or NULL if key couldn’t be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (!ht || !key || !ht->array)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
