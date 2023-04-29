#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - Start here
* @head: A double pointer to the head of the listint_t list.
*
* Desc - This function frees the memory allocated for each node in
*        the list. It starts from the head of the list and iterates
*        through each node, freeing the memory for each node until
*        reaching the end. After freeing all nodes, it sets the head
*        to NULL.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

