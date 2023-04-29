#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list.
* @head: A double pointer to the head of the listint_t list.
* @n: The value to be stored in the new node.
*
* Return: The address of the new element, or NULL if it failed.
*
* Description: This function creates a new node with the given value and
*              adds it at the end of the list. If the list is empty, the
*              new node becomes the head. The function traverses the list
*              until reaching the last node, then appends the new node.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}

