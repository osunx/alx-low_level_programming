#include"main.h"

/**
* print_rev - prints a string in reverse
*
* @s: string parameter input
*
* Return: Nothing
*/

void print_rev(char *s)
{
int stringindex;

/* Find the length of the string without null character '\0'*/
for (stringindex = 0; s[stringindex] != '\0'; ++stringindex)

/* Print characters from the last index as you decrement */
/* Decrease from last to first */
for (--stringindex; stringindex >= 0; --stringindex)
_putchar(s[stringindex]);

_putchar('\n');
}
