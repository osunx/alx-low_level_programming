#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
*
* @n: Pointer to the number containing the bit.
* @index: The index of the bit to clear, starting from 0.
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

unsigned long int mask = 1UL << index;
*n = *n & ~mask;

return (1);
}
