#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ind;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for ( ; ind < ht->size; ind++)
	{
		node = ht->array[ind];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}

