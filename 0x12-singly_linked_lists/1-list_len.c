#include "lists.h"

/**
 * list_len - gets the number of nodes
 *
 * @h: pointer to the head (first node)
 *
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t value = 1;

	/*if head is null return 0 nodes*/
	if (h == NULL)
		return (0);

	/*loop through the nodes h points to*/
	while (h != NULL)
	{
		/*go to the next node in the list*/
		h = h->next;
		/*count the number of node*/
		value++;
	}

	return (value);
}
