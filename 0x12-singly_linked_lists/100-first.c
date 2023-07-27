#include <stdio.h>

/**
 * premain - function that runs before main
 *
 * Return: nothing
*/

void print_message(void)  __attribute__ ((constructor)) premain()
/**
 * print_message - Prints the message before main function is executed.
 */
void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
