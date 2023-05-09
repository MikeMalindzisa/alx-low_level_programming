#include "main.h"

/**
* usage_error -Displays an error message indicating incorrect usage of
* the program, and exits with status code 98.
* @prog_name: the name of the program being executed
*/
void usage_error(char *prog_name)
{
	fprintf(stderr, "Usage: %s elf_filename\n", prog_name);
	exit(98);
}

/**
* print_magic - Print the magic number of an ELF header
* @magic: Pointer to the magic number array
*/
void print_magic(const unsigned char *magic)
{
	printf("  Magic:   ");
	for (int i = 0; i < SELFMAG; i++)
	{
		printf("%02x ", magic[i]);
	}
	printf("\n");
}

/**
* print_class - Prints the ELF class of the given ELF header.
*
* @class: The ELF class to print.
*/
void print_class(unsigned char class)
{
	printf("  Class:        ELF%d\n", class == ELFCLASS32 ? 32 : 64);
}


/**
* print_data - Prints the data encoding of
* the ELF header (little endian or unknown)
* @data: the data encoding byte from the ELF header
*/
void print_data(unsigned char data)
{
	printf("  Data:         %s\n", data == ELFDATA2LSB ? "2's complement,
		little endian" : "unknown");
}

/**
* print_osabi - prints the operating system and ABI of the ELF header
* @osabi: the value of the OS/ABI field in the ELF header
*/

void print_osabi(unsigned char osabi)
{
	printf("  OS/ABI:       ");
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
		break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
		break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
		break;
		default:
			printf("unknown\n");
	}
}
