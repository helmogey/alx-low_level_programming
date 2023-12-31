#include "main.h"
/**
*read_textfile - start
*Description: 'print string'
*@filename: input
*@letters: data
*Return: void
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
size_t bytes_read;
char *buffer = malloc(letters);

if (filename == NULL || buffer == NULL)
{
return (0);
}
file = fopen(filename, "r");
if (file == NULL)
{
return (0);
}
bytes_read = fread(buffer, 1, letters, file);
fclose(file);
write(STDOUT_FILENO, buffer, bytes_read);
return (bytes_read);
}
