#include <stdio.h>

/**
* set_string - Sets the value of a pointer to a char.
* @s: Pointer to a pointer to a char.
* @to: Pointer to a char.
*
* Description: This function takes a double pointer @s and a pointer @to.
* It assigns the value of @to to the memory location pointed to by @s.
* This updates the value of the original pointer in the calling function.
*/
void set_string(char **s, char *to)
{
*s = to;
}

int main(void)
{
char *s = "Hello";
char *to = "World";

printf("Before set_string: %s\n", s);
set_string(&s, to);
printf("After set_string: %s\n", s);

return 0;
}
