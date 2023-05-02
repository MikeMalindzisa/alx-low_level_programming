#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - Deletes node at index of a list.
* @head: Double pointer to the head of the list.
* @index: Index of the node to be deleted (starts at 0).
*
* Return: 1 if succeeded, -1 if failed.
*
* Description: Deletes the node at the specified index.
*              Returns 1 if successful, -1 if failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	previous = NULL;

	while (current != NULL)
	{
		if (count == index)
		{
			if (previous == NULL)
				*head = current->next;
			else
				previous->next = current->next;

			free(current);
			return (1);
		}

		previous = current;
		current = current->next;
		count++;
	}

	return (-1);
}

