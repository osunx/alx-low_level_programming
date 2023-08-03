#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
*
* @b: Pointer to a string of 0 and 1 characters.
*
* Return: The converted number, or 0 if:
* - The input string @b is NULL.
* - There is one or more characters in the string @b that is not 0 or 1.
*/
unsigned int binary_to_uint(const char *b)
{
/* Check if the input string is NULL */
if (b == NULL)
return (0);

unsigned int result = 0;

/* Iterate through the characters of the string */
while (*b != '\0')
{
/* Check if the character is a valid binary digit (either '0' or '1') */
if (*b != '0' && *b != '1')
return (0);

/* Convert the binary digit to an unsigned int and update the result */
result = (result << 1) + (*b - '0');
b++;
}

/* Return the converted unsigned int */
return (result);
}
