#include "main.h"
/**
*create_file - start
*Description: 'print string'
*@filename: input
*@text_content: content
*Return: void
*/
int create_file(const char *filename, char *text_content)
{
size_t byte_written;
int file_descriptor;

if (text_content == NULL)
{
return (-1);
}
file_descriptor = open(filename, O_CREAT | O_TRUNC, 0600);
if (file_descriptor == -1)
{
return (-1);
}
close(file_descriptor);
file_descriptor = open(filename, O_CREAT | O_WRONLY, 0600);
if (file_descriptor == -1)
{
return (-1);
}
byte_written = write(file_descriptor, text_content, strlen(text_content));
if (byte_written == (unsigned int)-1)
{
close(file_descriptor);
return (-1);
}
close(file_descriptor);
return (1);
}
