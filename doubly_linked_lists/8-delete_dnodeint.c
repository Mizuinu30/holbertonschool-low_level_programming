#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the nodes at index
 * of a linked list
 * @head: points to the start of the list
 * @index: position to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	dlistint_t *next_node;
	unsigned int i;

	if (!head || !(*head))
		return -1;

	if (index == 0)
	{
		*head = current_node->next;
		if (*head)
			(*head)->prev = NULL;
		free(current_node);
		return 1;
	}

	for (i = 0; current_node && i < index - 1; i++)
		current_node = current_node->next;

	if (!current_node || !(current_node->next))
		return -1;

	next_node = current_node->next->next;
	free(current_node->next);
	current_node->next = next_node;

	if (next_node)
		next_node->prev = current_node;

	return 1;
}

