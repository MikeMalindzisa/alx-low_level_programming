#include <stdlib.h>
#include "lists.h"

/**
* free_listint - Start here
* @head: A pointer to the head of the listint_t list.
*
* Desc - This function frees the memory allocated for each node in
*        the list. It starts from the head of the list and iterates
*        through each node, freeing the memory for each node until
*        reaching the end.
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

