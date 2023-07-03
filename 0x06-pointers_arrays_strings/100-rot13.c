#include <stddef.h>

/*
* rot13 -  encodes a string using rot13
* The function takes a string s as input and returns a pointer
* to the modified string. It uses two character arrays
* rot13_table_lower and rot13_table_upper to store the ROT13
* encoding tables for lowercase and uppercase letters, respectively.
* The function iterates over each character in the string using
* a pointer ptr. Inside the loop, it checks if the character is
* a letter (a-z or A-Z). If it is a letter, it determines the
* appropriate ROT13 table (rot13_table_lower or rot13_table_upper)
* @s : character to be printed
* based on the case of the letter. It calculates the index of
* the current character in the ROT13 table and performs the ROT13
* transformation by adding 13 to the index and taking the modulo
* 26 to wrap around the table. Finally, it updates the character
* at the current position with the ROT13-encoded character.
* After processing all characters in the string, it returns
* the modified string.
*/

char *rot13(char *s)
{
char *ptr = s;
char *rot13_table_lower = "abcdefghijklmnopqrstuvwxyz";
char *rot13_table_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

if (s == NULL)
return (NULL);

while (*ptr)
{
char c = *ptr;

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
char *rot13_table = (c >= 'a' && c <= 'z') ?
rot13_table_lower : rot13_table_upper;
int index = c - ((c >= 'a' && c <= 'z') ? 'a' : 'A');

*ptr = rot13_table[(index + 13) % 26];
}

ptr++;
}

return (s);
}
