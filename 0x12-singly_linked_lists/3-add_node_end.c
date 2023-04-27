#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - Start here
* Desc - Adds a new node at the end of list_t.
* @head: Pointer to the head of the list.
* @str: String to be duplicated and added to the list.
*
* Return: The address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *str_copy;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = str_copy;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}

