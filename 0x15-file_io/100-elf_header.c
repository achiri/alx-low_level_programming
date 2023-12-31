#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Prints an error message to stderr and exits with status code 98.
 * @message: The error message to print.
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * display_elf_header - Displays the information contained in the ELF header.
 * @filename: The name of the ELF file.
 */
void display_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Error opening file");

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error reading ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not an ELF file");

	printf("Magic:   %02x %02x %02x %02x\n", header.e_ident[EI_MAG0], header.e_ident[EI_MAG1],
	       header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type:                              %d\n", header.e_type);
	printf("Entry point address:               %lx\n", header.e_entry);

	close(fd);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	display_elf_header(argv[1]);

	return 0;
}
