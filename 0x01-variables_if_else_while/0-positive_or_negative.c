#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * stdlib.h provide necessary functions to generate a seed random
 * time.h insure a ramdom number is generated each time
 * Description: Assigns a random number to the variable n and
 * prints whether the number is positive, negative, or zero.
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("The number %d is ", n);
if (n > 0)
{
Printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
}
printf("negative\n");
}
return (0);
}
