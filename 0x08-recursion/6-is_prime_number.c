/**
 * is_prime_number - check if number is prime true return 1 otherwise return 0
 *
 * @n : input number
 *
 * Return: 1 if the number is prime, 0 otherwise.
*/

int is_prime_number(int n)
{
int i;

if (n <= 1)
{
return (0); /*Numbers less than or equal to 1 are not*/
}

for (i = 2; i < n; i++)
{
if (n % i == 0)
{
return (0); /*Found a divisor other than 1 and itself*/
}
}

return (1); /*No divisors found, the number is prime*/
}
