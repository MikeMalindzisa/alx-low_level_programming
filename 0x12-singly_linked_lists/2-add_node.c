#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Start here
 * Desc - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to first node
 * @str: String to be duplicated and added to the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head_ref, char *str)
{

list_t *new_node;
char *str_copy;

if (str == NULL)
	return (NULL);

new_node = malloc(sizeof(list_t));

if (new_node == NULL)
	return (NULL);

str_copy = strdup(str);

if (str_copy == NULL)
{
	free(new_node);
	return (NULL);
}

new_node->str = str_copy;
new_node->len = strlen(str_copy);
new_node->next = *head_ref;

*head_ref = new_node;

return (new_node);
}

