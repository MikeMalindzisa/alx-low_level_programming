#include <stddef.h>
#include "lists.h"
/**
 * listint_len - Start here
 * Desc - Returns the number of elements in listint_t
 * @h: pointer to the head node of listint_t
 *
 * Return: number of elements in listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

