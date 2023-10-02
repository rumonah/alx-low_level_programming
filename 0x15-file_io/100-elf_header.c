#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - checks if an elf is an ELF file
 * @e_ident - an array containing the ELF magic numbers
 * Description: if the file is not an ELF file - exit code 98
 */
void check_elf(unsigned char *e_ident)
{
	int a;

	for (a = 0 ; a < 4 ; a++)
	{
		if (e_ident[a] != 127 &&
				e_ident[a] != 'E' &&
				e_ident[a] != 'L' &&
				e_ident[a] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an Elf file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - prints a magic numbers of an ELF header
 * @e_ident - an array containing the Elf magic numbers
 * Description: Magic numbers separeted by spaces
 */
void print_magic(unsigned char *e_ident)
{
	int b;

	printf(" Magic: ");

	for (b = 0 ; b < EL_NIDENT ; b++)
	{
		printf("%02x", e_ident[b]);

		if (b == EL_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - prints class of the ELF header
 * @e_ident: an array containing the ELF class
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_data - prints data of an ELF header
 * @e_ident: an array containing the ELF class
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATASLB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATALMB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - prints version of an ELF header
 * @e_ident: an array containing the ELF class
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version: %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_abi - prints ABI version of an ELF header
 * @e_ident: an array containing the ELF class
 */
void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);)
}

/**
 * print_osabi - prints the OS/ABI of an ELF header
 * @e_ident: an array containing the ELF version
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");
	
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
		case ELFOSABI_TRU64:
			printf("UNIX - Tru64\n");
		case ELFOSABI_FREEBSD:
			printf("UNIX - Freebsd\n");
		case ELFOSABI_IRIX:
			printf("UNIX - Irix\n");
		case ELFOSABI_ARM:
			printf("UNIX - Arm\n");
	}
}

/**
 * print_type - prints the type of an ELF header
 * @e_ident: an array containing the ELF version
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
		case ET_NONE:
			printf("None (None)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
		case ET_REL:
			printf("REL (Relocatable file\n");
		case ET_EXEC:
			printf("EXEC (Executable file\n");
		case ET_CORE:
			printf("CORE (Core file\n");
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - print the entry of an ELF header
 * @e_ident: an array containing the ELF version
 * @e_entry: address of the ELF entry point
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entrypoint address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00fF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned  int)e_entry);

	else
		printf("%#x\n", e_entry);
}

/**
 * close_elf - closes an ELF file
 * @elf: file description of the ELF file
 * Description: if file cannot be closed - exit codee 98
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",elf);
		exit(98);
	}
}
