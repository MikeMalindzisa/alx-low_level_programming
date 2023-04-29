#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a listint_t list.
* @head: A double pointer to the head of the listint_t list.
* @n: The value to be stored in the new node.
*
* Return: The address of the new element, or NULL if it failed.
*
* Desc- This function creates a new node with the given value and
* adds it at the beginning of the list. The new node becomes
* the new head of the list, and it points to the previous head.
* If the memory allocation fails, the function returns NULL.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

