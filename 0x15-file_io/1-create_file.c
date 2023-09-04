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
int file descriptor;

if (text_content == NULL)
{
return (-1);
}
file_descriptor = open(filename, OCREAT | OTRUNC, 0600);
if (file_descriptor == -1)
{
return (-1);
}
close(file_descriptor);
file_descriptor = open(filename, O_CREAT | OWRONLY, 0600);
if (file_descriptor == -1)
{
return (-1);
}
if (byte_written == -1)
{
close(file_descriptor);
return (-1);
}
close(file_dexcriptor)
return (1);
}
