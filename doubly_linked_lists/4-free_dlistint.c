#include "lists.h"
#include <stddef.h>
/**
 * free_dlistint - a function that frees a list_t list.
 * @head: pointer.
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next = current->next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

