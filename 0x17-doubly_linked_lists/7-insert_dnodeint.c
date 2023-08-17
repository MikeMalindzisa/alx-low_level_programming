#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @h: Double pointer to the head of the list.
* @idx: Index where the new node should be added (starting from 0).
* @n: Value to be stored in the new node.
* Return: Address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (current)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}

	free(new_node);
	return (NULL);
}
