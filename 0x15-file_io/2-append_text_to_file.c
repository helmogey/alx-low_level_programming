#include "main.h"
/**
*append_text_to_file - start
*Description: 'print string'
*@filename: input
*@text_content: content
*Return: void
*/
int append_text_to_file(const char *filename, char *text_content)
{
size_t bytes_written;
int file_descriptor;

if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
{
return (-1);
}
close(file_descriptor);
return (1);
}
file_descriptor = open(filename, O_APPEND | O_WRONLY);
if (file_descriptor == -1)
{
return (-1);
}

bytes_written = write(file_descriptor, text_content, strlen(text_content));
if (bytes_written <= 0)
{
close(file_descriptor);
return (-1);
}
close(file_descriptor);
return (1);
}
