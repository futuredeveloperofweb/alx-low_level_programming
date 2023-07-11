#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h)

/**
 * print_magic - prints magic bytes
 * @e: the ELF header
 */
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf(" Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", e.e_ident[i], i == EI_NIDENT - 1 ? "\n": " ");
}
/**
 * print_cl - print ELF
 * @e: the Elf header
 */
void print_cl(Elf64_Ehdr h)
{
	printf(" Class: ");
	switch (e.e__ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}
