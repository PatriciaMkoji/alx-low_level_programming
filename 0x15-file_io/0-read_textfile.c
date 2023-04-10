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
	FILE *savefile;
	ssize_t tot_read = 0;

	if (filename == NULL)
	{
		return (0);
	}

	savefile = fopen(filename, "r");

	if (savefile == NULL)
	{
		return (0);
	}

	ch = fgetc(savefile);
	while (ch != EOF && letters > 0)
	{
		if (putchar(ch) == EOF)
		{
			fclose(savefile);
			return (0);
		}
		tot_read++;
		letters--;
		ch = fgetc(savefile);
	}
	fclose(savefile);

	return (tot_read);
}

#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
