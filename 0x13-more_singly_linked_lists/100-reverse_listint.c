#include "lists.h"

/**
* reverse_listint - Reverses a listint_t linked list.
* @head: A double pointer to the head of the listint_t list.
*
* Return: A pointer to the first node of the reversed list.
*
* Description: Reverses the given linked list in-place.
*              Uses a two-pointer approach to reverse
*              the list without using additional memory.
*              Iteratively reverses the pointers of each
*              node in the list until reaching the end.
*              Updates the head pointer to the new head
*              of the reversed list and returns it.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;
	return (*head);
}

