#include "main.h"y

/**
* error_exit - Display an error message and exit with status code 98.
* @message: The error message to display.
*/
void error_exit(const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(98);
}

/**
* main - Display information from the ELF header of an ELF file.
* @argc: The number of arguments passed to the program.
* @argv: An array of strings containing the arguments.
*
* Return: On success, returns 0. Otherwise, exits with status code 98.
*/
int main(int argc, char **argv)
{
int fd;
Elf64_Ehdr elf_header;

if (argc != 2)
error_exit("Usage: elf_header elf_filename");

fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_exit("Error: Cannot open file");

if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
error_exit("Error: Cannot read ELF header");

if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
elf_header.e_ident[EI_MAG3] != ELFMAG3)
error_exit("Error: Not an ELF file");

printf("Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x ", elf_header.e_ident[i]);
printf("\n");

printf("Class:                             %s\n",
elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid");

printf("Data:                              %s\n",
elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
elf_header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid");

printf("Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);

printf("OS/ABI:                            ");
switch (elf_header.e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:     printf("UNIX - System V\n"); break;
case ELFOSABI_HPUX:     printf("UNIX - HP-UX\n"); break;
case ELFOSABI_NETBSD:   printf("UNIX - NetBSD\n"); break;
case ELFOSABI_LINUX:    printf("UNIX - Linux\n"); break;
case ELFOSABI_SOLARIS:  printf("UNIX - Solaris\n"); break;
case ELFOSABI_AIX:      printf("UNIX - AIX\n"); break;
case ELFOSABI_IRIX:     printf("UNIX - IRIX\n"); break;
case ELFOSABI_FREEBSD:  printf("UNIX - FreeBSD\n"); break;
case ELFOSABI_TRU64:    printf("UNIX - TRU64\n"); break;
case ELFOSABI_ARM:      printf("ARM\n"); break;
case ELFOSABI_STANDALONE: printf("Standalone (embedded)\n"); break;
default:                printf("Unknown\n");
}

printf("ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);

printf("Type:                              ");
switch (elf_header.e_type)
{
case ET_NONE:   printf("NONE (No file type)\n"); break;
case ET_REL:    printf("REL (Relocatable file)\n"); break;
case ET_EXEC:   printf("EXEC (Executable file)\n"); break;
case ET_DYN:    printf("DYN (Shared object file)\n"); break;
case ET_CORE:   printf("CORE (Core file)\n"); break;
default:        printf("Unknown\n");
}

printf("Entry point address:               0x%lx\n", (unsigned long) elf_header.e_entry);

close(fd);
return (0);
}
