#include "main.h"
/**
*main - start
*Description: 'print string'
*@argc: input
*@argv: content
*Return: void
*/
int main(int argc, char *argv[])
{
int file_descriptor, i;
Elf64_Ehdr elf_header;
size_t bytes_read;

if (argc != 2)
{
fprintf(stderr, "Usage: elf_header elf_filename\n");
exit(98);
}
file_descriptor = open(argv[1], O_RDONLY);
if (file_descriptor == -1)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(98);
}
lseek(file_descriptor, 0, SEEK_SET);
bytes_read = read(file_descriptor, &elf_header, sizeof(elf_header));
if (bytes_read != sizeof(elf_header))
{
fprintf(stderr, "Error: Can't read ELF header from file %s\n", argv[1]);
exit(98);
}
printf("Magic: ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", elf_header.e_ident[i]);
}
printf("\n");
printf("Class: %d\n", elf_header.e_type);
printf("Data: %d\n", elf_header.e_machine);
printf("Version: %d\n", elf_header.e_version);
printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
printf("ABI Version: %d\n", elf_header.e_version);
printf("Type: %d\n", elf_header.e_type);
printf("Entry point address: 0x%x\n", (unsigned int)elf_header.e_entry);
close(file_descriptor);
return (0);
}
