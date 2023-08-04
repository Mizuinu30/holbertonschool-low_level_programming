#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list.
 * @:head: pointer to a pointer.
 * @:str: pointer.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t  *new_node;

	if (!head || !str)
	{
		return (NULL);
	}
	new_node = (list_t *)malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
