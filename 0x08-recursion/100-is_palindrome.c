
/**
* is_palindrome - Check if a string is a palindrome.
*
* @s: The input string to check.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
int i;
int length = strlen(s); /* Calculate the length of the string */

if (length == 0 || length == 1)
{
return (1); /* An empty string or a single character is a palindrome */
}

for (i = 0; i < length / 2; i++)
{
if (s[i] != s[length - 1 - i])
{
return (0); /* Characters don't match, not a palindrome */
}
}

return (1); /* All characters matched, it's a palindrome */
}
