#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
*
* Return: The sum of all the data (n) in the linked list, or 0 if the list is
* empty.
*
* Description: This function calculates the sum of all the data values
* in the linked list.It traverses the list starting from the head and
* iterates through each node, adding the data value of each node to the
* total sum. If the list is empty (head is NULL), it returns 0.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

