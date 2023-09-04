#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * display_elf_header - it displays the header
 * @header: the header
 */
void display_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class:	%s\n", (header->e_ident[EI_CLASS] ==
				ELFCLASS64) ? "ELF64" : "ELF32");
	printf("Data:	%s\n", (header->e_ident[EI_DATA] ==
				ELFDATA2LSB) ? "2's complement, little-endian" : "Unknown");
	printf("Version:	%d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:	%d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:	%d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:		%d (EXEC (Executable file))\n", header->e_type);
	printf("Entry point address:	%#lx\n", (unsigned long)header->e_entry);
}
/**
 * main - starts the code
 * @argc: integer
 * @argv: character
 * Return: read files
 */
int main(int argc, char *argv[])
{
	const char *elf_filename = argv[1];
	int fd = open(elf_filename, O_RDONLY);
	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to open file %s\n", elf_filename);
		return (98);
	}

	if (bytes_read != sizeof(Elf64_Ehdr) ||
			header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", elf_filename);
		close(fd);
		return (98);
	}

	display_elf_header(&header);
	close(fd);
	return (0);
}
