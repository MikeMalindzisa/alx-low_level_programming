#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Start here.
* @head: A double pointer to the head of the listint_t list.
*
* Return: The head node's data (n), or 0 if the list is empty.
*
* Description: This function deletes the head node of the linked list
*              and returns its data (n). If the list is empty (head is NULL),
*              it returns 0. The function updates the head pointer to point
*              to the new head after deleting the old one.
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}

