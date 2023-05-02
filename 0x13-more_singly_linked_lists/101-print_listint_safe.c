#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
*
* Return: The number of nodes in the list.
*
* Description: Prints the elements of a linked list
*              of integers in a safe manner. It can
*              handle lists with loops. The function
*              goes through the list only once and
*              prints the value of each node.
*              If the function fails, it exits the
*              program with status 98. The output
*              format is similar to the example.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current, *runner;
size_t count = 0;

current = runner = head;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;

current = current->next;

while (runner < current)
{
if (current->next == runner)
{
printf("-> [%p] %d\n", (void *)current, current->n);
exit(98);
}
runner = runner->next;
}
runner = head;
}

return (count);
}

