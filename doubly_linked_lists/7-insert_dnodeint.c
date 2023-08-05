#include "lists.h"

/**
 * insert_dnodeint_at_index - function that insert a new node at given position
 * @h: pointer to the start of the list
 * @idx: given position
 * @n: data to give to the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 0; tmp && i < idx - 1; i++)
		tmp = tmp->next;

	if (!tmp)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp->next;
	new_node->prev = tmp;
	if (tmp->next)
		tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}

