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

/*finds the length of string without null character '\0'*/
for (stringindex = 0; s[stringindex] != '\0'; ++stringindex);
/*print char from the last index as you decrement*/
/*decrease from last to first*/
for (--stringindex; stringindex >= 0; --stringindex)
_putchar(s[stringindex]);
_putchar('\n');
}
