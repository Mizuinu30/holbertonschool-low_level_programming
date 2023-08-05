#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node in the list
 * @head: pointer to the start of the list
 * @index: is the index of the node, starting at 0
 * Return: return null if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int j = 0;

	while (tmp != NULL && j != index)
	{
		tmp = tmp->next;
		j++;
	}

	return (tmp);
}

