#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Start here
 * Desc - Prints all the elements of a listint_t linked list.
 * This function traverses a singly linked list and prints the
 * value of each node. It starts from the head of the list and
 * iterates through each node until reaching the end. The value
 * of each node is printed followed by a newline character. The
 * total number of nodes in the list is returned.
 *
 * @h: A pointer to the head of listint_t.
 *
 * Return: The number of nodes in listint_t
 *
 */

size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	count++;
}

return (count);
}

