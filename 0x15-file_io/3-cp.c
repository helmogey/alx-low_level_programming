#include "main.h"
/**
*main - start
*Description: 'print string'
*@argc: input
*@argv: content
*Return: void
*/
int main(int argc, char *argv[]) {
int file_from_descriptor, file_to_descriptor;
char buffer[1024];
size_t bytes_read;

if (argc != 2)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
file_from_descriptor = open(argv[1], O_RDONLY);
if (file_from_descriptor == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to_descriptor = open(argv[2], O_RDONLY);
if (file_to_descriptor != -1)
{
close(file_to_descriptor);
if (truncate(argv[2], 0) == -1)
{
dprintf(2, "Error: Can't truncate file %s\n", argv[2]);
exit(99);
}
}
file_to_descriptor = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
if (file_to_descriptor == -1)
{
dprintf(2, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
while ((bytes_read = read(file_from_descriptor, buffer, sizeof(buffer))) > 0)
{
if ((unsigned int)write(file_to_descriptor, buffer, bytes_read) != bytes_read)
{
dprintf(2, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
}
if (close(file_from_descriptor) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", file_from_descriptor);
exit(100);
}
if (close(file_to_descriptor) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", file_to_descriptor);
exit(100);
}
return (0);
}