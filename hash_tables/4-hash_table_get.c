#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 *
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 *
 * Return: the value associated with the element, or NULL if key
 * couldnt be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *temp;

	if (!ht || !key)
		return (0);

	ind = key_index((unsigned char *)key, ht->size);
	temp = ht->array[ind];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
