#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
size_t node_count = 1;

while (h != NULL)
{
/*check if the node is present*/
if (h->n != '\0')
node_count++;
/*Move to the next*/
h = h->next;
}

return (node_count);
}
