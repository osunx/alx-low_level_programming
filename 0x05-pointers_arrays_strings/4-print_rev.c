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
if (s == NULL)
return;

int length = 0;
while (s[length] != '\0')
length++;

for (int i = length - 1; i >= 0; i--)
printf("%c", s[i]);

printf("\n");
}
