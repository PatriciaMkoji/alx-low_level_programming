#include "main.h"
/**
 * main - displays the information contained in the ELF heade
 * @argc: number of arguments passed
 * @argv: an array of strings  passed to the program
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int fild;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	fild = open(argv[1], O_RDONLY);
	if (fild == -1)
	{
		fprintf(stderr, "Error: failed to open %s\n", argv[1]);
		return (98);
	}
	if (read(fild, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, ERRM, argv[1]);
		close(fild);
		return (98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, ERRM, argv[1]);
		close(fild);
		return (98);
	}
	print_elf_header(header);
	close(fild);
	return (0);
}
/**
 * print_elf_header - print the information
 * @header: ELF header
 */
void print_elf_header(Elf64_Ehdr header)
{
	int indx;

	printf("ELF Header:\n");
	printf("  Magic:                             ");
	for (indx = 0; indx < EI_NIDENT; indx++)
	{
		printf("%02x ", header.e_ident[indx]);
		printf("\n");
		printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
		printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
		printf("  Version:                           %d%s\n", header.e_ident[EI_VERSION], header.e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
		printf("  OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
		printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
		printf("  Type:                              %d\n", header.e_type);
		printf("  Entry point address:               %lx\n", header.e_entry);
	}
}
