#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
* @index: The index of the node, starting at 0.
*
* Return: A pointer to the nth node, or NULL if the node does not exist.
*
* Description: This function traverses the linked list starting from the head
*              and moves to the next node until it reaches the node at the
*              specified index. If the node at the index does not exist,
*              the function returns NULL. Otherwise, it returns a pointer
*              to the node at the given index.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}

