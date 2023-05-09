#include "main.h"

#define BUFFZ 1024

/**
 * print_error - it prints an error message to stderr
 * @message: error message to be printed
 * @file: its the file name to include in the err msg
 * @code: exit code to used when exiting
 * Return: no return
 */
void print_error(const char *message, const char *file, int code)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}
/**
 * main - it will copy the content of one file to another file
 * @argc: number of arguments used
 * @argv: array of pointers to arguments
 * Return: 0 if successful, or an exit code
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int fild_from, fild_to;
	char buffer[BUFFZ];
	ssize_t readn, writn;

	if (argc != 3)
		print_error("Usage: %s file_from file_to\n", argv[0], 97);
	file_from = argv[1];
	file_to = argv[2];
	fild_from = open(file_from, O_RDONLY);
	if (fild_from < 0)
		print_error("Error: Can't read from file %s\n", file_from, 98);
	fild_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fild_to < 0)
		print_error("Error: Can't write to %s\n", file_to, 99);
	while ((readn = read(fild_from, buffer, BUFFZ)) > 0)
	{
		writn = write(fild_to, buffer, readn);
		if (writn != readn)
			print_error("Error: Can't write to %s\n", file_to, 99);
	}
	if (readn < 0)
		print_error("Error: Can't read from file %s\n", file_from, 98);
	if (close(fild_from) < 0)
		print_error("Error: Can't close fd %d\n", file_from, 100);
	if (close(fild_to) < 0)
		print_error("Error: Can't close fd %d\n", file_to, 100);
	return (0);
}
