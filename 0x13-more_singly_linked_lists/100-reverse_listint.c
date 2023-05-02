#include "lists.h"

/**
* reverse_listint - Reverses a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
*
* Return: A pointer to the first node of the reversed list.
*
* Description: Reverses the order of the nodes in a linked list
*              of integers. The function returns a pointer to the
*              new head of the reversed list.
*              The implementation uses one loop and does not use
*              malloc, free, or arrays. It declares a maximum of
*              two variables.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}

