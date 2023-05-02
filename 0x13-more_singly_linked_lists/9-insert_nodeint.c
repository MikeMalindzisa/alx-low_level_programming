#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a
 * listint_t linked list.
 * @head: A double pointer to the head of the listint_t list.
 * @n: The data value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it
 * failed to add the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

/**
* insert_nodeint_at_index - Inserts a new node at a given position
* in a listint_t linked list.
* @head: A double pointer to the head of the listint_t list.
* @idx: The index at which the new node should be inserted, starting at 0.
* @n: The data value to be stored in the new node.
*
* Return: The address of the new node, or NULL if it failed to add
* the new node.
*
* Description: This function inserts a new node at the specified
* index position in the linked list. It first checks if the list is
* empty or if the desired index is 0. If so, it adds a new node at the
* beginning of the list. If the desired index is greater than 0,
* the function traverses the list until it reaches the node at the
* previous index.It then adds the new node after the node at the
* previous index. If the desired index is beyond the bounds of the list,
* the function does not add the new node and returns NULL.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current = *head;

	listint_t *new_node;

	if (idx == 0 || *head == NULL)
		return (add_nodeint(head, n));

	while (current != NULL && count < idx - 1)
	{
		count++;
		current = current->next;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

