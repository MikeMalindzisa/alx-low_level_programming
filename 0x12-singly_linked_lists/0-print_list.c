#include <stdio.h>
#include "lists.h"

/**
 * print_list - Strat here
 * Desc - Prints all elements of list_t
 * @head - pointer to first node
 *
 * Return: nodes count
 *
 */

size_t print_list(const list_t *head)
{
	size_t i = 0;
	const list_t *curr_node = head;


	while (curr_node != NULL)
	{
		if (curr_node -> str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", curr_node -> len, curr_node -> str);

		i++;
		curr_node = curr_node -> next;
	}

	return i;
}
