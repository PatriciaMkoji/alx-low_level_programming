#include "main.h"
#define BUFFZ 1024

/**
 * main - will copy the content of one file to another
 * @argc: number of arguments that is passed
 * @argv: an array of points to the argument
 * Return: if successful return 0
 */
int main(int argc, char *argv[])
{
	FILE *file_to, *file_from;
	char buffer[BUFFZ];
	size_t bytr, bytw;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	file_to = fopen(argv[2], "w");
	if (file_to == NULL)
	{
		printf("Error: Can't write to file %s\n", argv[2]);
		return (99);
	}
	while ((bytr = fread(buffer, 1, BUFFZ, file_from)) > 0)
	{
		bytw = fwrite(buffer, 1, bytr, file_to);
		if (bytw != bytr)
		{
			printf("Error: Can't write to file %s\n", argv[2]);
			return (99);
		}
	}
	if (ferror(file_from))
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	if (fclose(file_from) != 0 || fclose(file_to) != 0)
	{
		printf("Error: Can't close file\n");
		return (100); }
	return (0);
}
