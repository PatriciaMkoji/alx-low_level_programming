#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * print_error - prints an error message to stderr and exits with a code
 * @message: the error message to print
 * @file: the file name to include in the error message
 * @code: the exit code to use when exiting
 *
 * Return: nothing
 */
void print_error(const char *message, const char *file, int code)
{
    dprintf(STDERR_FILENO, message, file);
    exit(code);
}

/**
 * main - copies the content of one file to another file
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, or an exit code if an error occurred
 */
int main(int argc, char *argv[])
{
    char *file_from, *file_to;
    int fd_from, fd_to;
    char buffer[BUFFER_SIZE];
    ssize_t nread, nwritten;

    if (argc != 3)
        print_error("Usage: %s file_from file_to\n", argv[0], 97);

    file_from = argv[1];
    file_to = argv[2];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from < 0)
        print_error("Error: Can't read from file %s\n", file_from, 98);

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to < 0)
        print_error("Error: Can't write to %s\n", file_to, 99);

    while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        nwritten = write(fd_to, buffer, nread);
        if (nwritten != nread)
            print_error("Error: Can't write to %s\n", file_to, 99);
    }
    if (nread < 0)
        print_error("Error: Can't read from file %s\n", file_from, 98);

    if (close(fd_from) < 0)
        print_error("Error: Can't close fd %d\n", file_from, 100);

    if (close(fd_to) < 0)
        print_error("Error: Can't close fd %d\n", file_to, 100);

    return (0);
}

