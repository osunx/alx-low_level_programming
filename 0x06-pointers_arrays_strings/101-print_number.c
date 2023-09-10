#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 * Return: Nothing
 */
void print_number(int n)
{
if (n == 0)
{
_putchar('0');
return;
}

if (n < 0)
{
_putchar('-');
n = -n;
}

int reversed = 0;
int temp = n;

while (temp != 0)
{
reversed = reversed * 10 + temp % 10;
temp /= 10;
}

while (reversed != 0)
{
_putchar(reversed % 10 + '0');
reversed /= 10;
}
}
