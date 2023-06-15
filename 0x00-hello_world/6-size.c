#include <stdio.h>

/**
 * main - An entry into a C program
 * sizeof: Return the size in byte of each of the variables types
 * void - Indicate the program will not take input from use
 * description: A program Using the sizeof function
 * Return: (0); (success) toindicate the code ran without any errors
*/
int main(void)
{
printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Size of an int: %u  byte(s)\n", sizeof(int));
printf("Size of a long int: %u  byte(s)\n", sizeof(long int));
printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
