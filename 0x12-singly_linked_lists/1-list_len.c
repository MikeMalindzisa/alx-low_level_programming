#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * list_len - Start here
 * Desc - Returns number of elements in list_t
 *
 * @head: Pointer to first node
 *
 * Return: elements count
 *
 */
size_t list_len(const list_t *head)
{
	size_t i = 0;
	const list_t *curr_node = head;

	while (curr_node != NULL)
	{
		i++;
		curr_node = curr_node->next;
	}

	return (i);
}


