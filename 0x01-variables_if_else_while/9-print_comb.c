#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by ", " in ascending order
 * using the putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
int pCombo;
for (pCombo = 0; pCombo <= 9; pCombo++)
{
putchar(pCombo + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
