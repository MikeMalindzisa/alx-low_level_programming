#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: Double pointer to the head of the list.
* @n: Value to be stored in the new node.
* Return: Address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		return (*head = new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	new_node->prev = temp;
	temp->next = new_node;

	return (new_node);
}
