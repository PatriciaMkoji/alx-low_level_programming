#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdio.h>
#include  <stdlib.h>
#include  <string.h>

#define ERRM "Error: %s is not an ELF file\n"

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_elf_header(Elf64_Ehdr header);

#endif
