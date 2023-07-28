#include "lists.h"


/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
unsigned int len = 0;
const char *str = h->str;

if (str == NULL)
{
str = "(nil)";
len = 5;
}
else
{
while (str[len] != '\0')
len++;
}

for (unsigned int i = 0; i < len; i++)
_putchar(str[i]);

_putchar('\n');
count++;
h = h->next;
}

return count;
}
