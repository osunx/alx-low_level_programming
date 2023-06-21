#include <stdio.h>

/**
 * main - Entry into a C program
 *
 * printFibonacci - Prints the Fibonacci sequence up to the specified number of terms.
 *
 * @n: The number of Fibonacci terms to print.
 *
 * Return: number of digits
*/

void printFibonacci(int n)
{
unsigned int fib1 = 1, fib2 = 2, nextTerm;
int count;

printf("%u, %u", fib1, fib2);

for (count = 3; count <= n; ++count)
{
nextTerm = fib1 + fib2;

printf(", %u", nextTerm);

fib1 = fib2;
fib2 = nextTerm;
}
}

int main(void)
{
printFibonacci(98);
printf("\n");

return (0);
}
