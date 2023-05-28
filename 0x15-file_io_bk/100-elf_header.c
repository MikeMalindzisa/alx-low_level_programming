#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * error - print error message to stderr and exit with code 98
 * @msg: error message
 */
void error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * print_m_c - print ELF magic number, ELF class, ELF data encoding
 * and ELF Version
 * @ehdr: ELF header struct
 */
void print_m_c(Elf64_Ehdr ehdr)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%s", ehdr.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
	printf("  Class:                             ");
	switch (ehdr.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
		break;
		case ELFCLASS64:
			printf("ELF64\n");
		break;
		default:
			printf("<unknown: %x>\n", ehdr.e_ident[EI_CLASS]);
	}
	printf("  Data:                              ");
	switch (ehdr.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
		break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
		break;
		default:

		printf("<unknown: %x>\n", ehdr.e_ident[EI_DATA]);
	}
	printf("  Version:		%d", ehdr.e_ident[EI_VERSION]);
	if (ehdr.e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * print_oa - print ELF operating system and ABI
 * @ehdr: ELF header struct
 */
void print_oa(Elf64_Ehdr ehdr)
{
	printf("  OS/ABI:                            ");
	switch (ehdr.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
		break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
		break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
		break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
		break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
		break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
		break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
		break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
		break;
		case ELFOSABI_ARM:
			printf("ARM\n");
		break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
		break;
		default:
			printf("<unknown: %x>\n", ehdr.e_ident[EI_OSABI]);
	}
}

/**
 * print_v_t_a - print ELF ABI version,
 * ELF type and ELF entry point address
 * @ehdr: ELF header struct
 */
void print_v_t_a(Elf64_Ehdr ehdr)
{
	/* ELF ABI VERSION */
	printf("ABI Version:\t\t\t%u\n", ehdr.e_ident[EI_ABIVERSION]);

	/* ELF Type */
	printf("Type:\t\t\t\t");

	switch (ehdr.e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
		break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
		break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
		break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
		break;
		case ET_CORE:
			printf("CORE (Core file)\n");
		break;
		default:
			printf("<unknown: %x>\n", ehdr.e_type);
		break;
	}

	/* ELF Entry point address */
	printf("Entry point address:\t\t%#lx\n", ehdr.e_entry);


}

/**
 * main - display information contained in the ELF header
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd, nread;
	Elf64_Ehdr ehdr;

	if (argc != 2)
		return (printf("Usage: %s elf_filename\n", argv[0]), 98);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (dprintf(STDERR_FILENO, "Error: Cannot read %s\n", argv[1]), 98);

	nread = read(fd, &ehdr, sizeof(ehdr));
	if (nread != sizeof(ehdr) ||
	    ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
	    ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
	    ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
	    ehdr.e_ident[EI_MAG3] != ELFMAG3)
		return (
				dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]), 98
			);

	print_m_c(ehdr);
	print_oa(ehdr);
	print_v_t_a(ehdr);

	close(fd);
	return (0);
}

