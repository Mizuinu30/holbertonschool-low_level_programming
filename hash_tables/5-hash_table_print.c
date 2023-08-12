#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int index;
    hash_node_t *node;
    char *separator;

    if (ht == NULL)
        return;

    printf("{");
    separator = "";

    for (index = 0; index < ht->size; index++)
    {
        for (node = ht->array[index]; node != NULL; node = node->next)
        {
            printf("%s'%s': '%s'", separator, node->key, node->value);
            separator = ", ";
        }
    }

    printf("}\n");
}

