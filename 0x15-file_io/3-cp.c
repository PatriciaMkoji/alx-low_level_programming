#include "main.h"
/**
 * main - program begins to run from here
 * @argc: counts arguments in program
 * @argv: pointer array used
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	size_t byt_read;
	FILE *file_from;
	FILE *file_to;

	if (argc != 3)
	{
		printf("Copy the files from file_from to file_to");
		exit(1);
	}
	file_from = fopen(argv[1], "rb");
	if (file_from == NULL)
	{
		printf("File us unreadble %s\n", argv[1]);
		exit(2);
	}
	file_to = fopen(argv[2], "wb");
	if (file_to == NULL)
	{
		printf("File is unwrittable %s\n", argv[2]);
		exit(3);
	}
	while ((byt_read = fread(buffer, 1, sizeof(buffer), file_from)))
	{
		if (fwrite(buffer, 1, byt_read, file_to) != byt_read)
		{
			printf("cant'wrte into the string %s\n", argv[2]);
			exit(4);
		}
	}
	if (fclose(file_from) != 0)
	{
		printf("Error! in writing %s\n", argv[1]);
		exit(5);
	}
	if (fclose(file_to) != 0)
	{
		printf("Error in closing %s\n", argv[2]);
		exit(6);
	} return (0);
}

