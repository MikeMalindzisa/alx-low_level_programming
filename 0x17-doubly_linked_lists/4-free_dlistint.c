#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - Frees a dlistint_t list.
* @head: Pointer to the head of the list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
