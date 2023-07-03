#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int a[5] = {0, 1, 98, 3, 4};
int *p = &a[2] - 1;

printf("a[2] = %d\n", *(a + 2));
printf("%d\n", *p);
*p = 98;
printf("%d\n", *p);
printf("a[2] = %d\n", *(a + 2));
return (0);
}
