#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 * Fibonacci sequence not exceed
 * 4million
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int fib1 = 1, fib2 = 2, nextTerm;
long long sum = 2;  /** Start with sum = 2 since the second term (2) is even */

while (fib2 <= 4000000)
{
nextTerm = fib1 + fib2;

if (nextTerm % 2 == 0)
sum += nextTerm;

fib1 = fib2;
fib2 = nextTerm;
}

printf("%lld\n", sum);

return (0);
}
