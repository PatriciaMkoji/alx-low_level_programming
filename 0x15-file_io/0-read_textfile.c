#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer pointing to the file
 * @letters: number of letters it should read and print
 * Return: if filename is NULL return 0,
 * write fails or does not write the expected amount of return 0,
 * actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char ch;
	FILE *file;
	ssize_t tot_read = 0;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	ch = fgetc(file);
	while (ch != EOF && letters > 0)
	{
		if (putchar(ch) == EOF)
		{
			return (0);
		}
		tot_read++;
		letters--;
		ch = fgetc(file);
	}
	fclose(file);

	return (tot_read);
}
