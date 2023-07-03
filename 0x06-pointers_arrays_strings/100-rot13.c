#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* rot13 - Encodes a string using ROT13 algorithm
* @s: The string to encode
*
* Return: Pointer to the encoded string
*/
char *rot13(char *s)
{
char *result;
int i = 0;

result = malloc(strlen(s) + 1);
while (result == NULL)
{
return (NULL);
}

while (s[i] != '\0')
{
char c = s[i];
int offset = (c >= 'a' && c <= 'z') ? 'a' : 'A';

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
result[i] = (c - offset + 13) % 26 + offset;
else
result[i] = c;

i++;
}

result[i] = '\0';
return (result);
}
