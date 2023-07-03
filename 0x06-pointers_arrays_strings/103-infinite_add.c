#include <stdio.h>

/**
* infinite_add - Adds two numbers
* @n1: The first number as a string
* @n2: The second number as a string
* @r: The buffer to store the result
* @size_r: The size of the buffer
*
* Return: Pointer to the result (r) or 0 if the result cannot be stored in r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, carry, sum;
int i, j, k;

/* Calculate the lengths of the input numbers */
for (len1 = 0; n1[len1] != '\0'; len1++)
;
for (len2 = 0; n2[len2] != '\0'; len2++)
;

if (size_r <= len1 || size_r <= len2)
return (0); /* Result cannot fit in r */

carry = 0;
i = len1 - 1;
j = len2 - 1;
k = size_r - 1;

while (i >= 0 || j >= 0 || carry)
{
sum = carry;
if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';

carry = sum / 10;
r[k--] = sum % 10 + '0';
}

if (k < 0)
return (0); /* Result cannot fit in r */

return (&r[k + 1]);
}

int main(void)
{
char n1[] = "123456789";
char n2[] = "987654321";
char result[20];

char *res = infinite_add(n1, n2, result, sizeof(result));
if (res == 0)
printf("Result cannot fit in buffer\n");
else
printf("Result: %s\n", res);

return (0);
}
