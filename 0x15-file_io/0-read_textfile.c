#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file to read
 * @letters: the maximum number of letters read and printed
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE  *filep;
	ssize_t maxbyt;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	filep = fopen(filename, "r");

	if (filep == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		fclose(filep);
		return (0);
	}

	maxbyt = fread(buf, sizeof(char), letters, filep);
	if (maxbyt < 0)
	{
		fclose(filep);
		return (0);
	}
	printf("%.*s", (int)maxbyt, buf);
	fclose(filep);
	return (maxbyt);
}
