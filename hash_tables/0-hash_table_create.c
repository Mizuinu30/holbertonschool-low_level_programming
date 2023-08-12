#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the array.
 * Return:a pointer to the newly created hash table
 * and if something goes wrong return NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **array;
	unsigned long int o ;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);

	if (array == NULL)
    {
		free(hash_table);
		return (NULL);
	}

	for (o = 0; o < size; o++)
		array[o] = NULL;

	hash_table->size = size;
	hash_table->array = array;

	return (hash_table);
}
