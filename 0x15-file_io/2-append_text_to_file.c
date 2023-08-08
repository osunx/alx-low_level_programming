#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fdescriptor, contentwritten, wordslen = 0;

/* Check if filename is NULL and return -1 */
if (filename == NULL)
return (-1);

/*Open the file in write-only mode with O_WRONLY and O_APPEND flags.*/
/* O_APPEND ensures that data is added to the end of the file. */
fdescriptor = open(filename, O_WRONLY | O_APPEND);
if (fdescriptor == -1)
return (-1);

/*If text_content is not NULL, calculate the length of*/
/*the string and append the content to the file */
if (text_content != NULL)
{
while (text_content[wordslen] != '\0')
wordslen++;
contentwritten = write(fescriptor, text_content, wordslen);
/* Check if write was successful */
if (contentwritten != wordslen)
{
close(fdescriptor);
return (-1);
}
}

/* Close the file and return 1 to indicate success */
close(fdescriptor);
return (1);
}
