#include"main.h"

/**
* print_square - print a square using the character #
*
* @size: is the size of the square
*
* Return: Always 0 (Success)
*/

void print_square(int size)
{
int row, box;

for (row = 1; row <= size; ++row)
{
for (box = 1; box <= size; ++box)
_putchar('#');
_putchar('\n');
}
}
