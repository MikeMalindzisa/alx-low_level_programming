#include <stdlib.h>
#include "lists.h"

/**
* free_list - Start here
* Desc - Frees list_t.
* @head: Pointer to the head of the list.
*/
void free_list(list_t *head)
{
	list_t *curr_node, *next;

	curr_node = head;
	while (curr_node != NULL)
	{
		next = curr_node->next;
		free(curr_node->str);
		free(curr_node);
		curr_node = next;
	}
}

