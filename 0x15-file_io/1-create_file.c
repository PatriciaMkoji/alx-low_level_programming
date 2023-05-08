#include "main.h"

/**
 * create_file - create file with the given file name
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *filep;

	if (filename == NULL)
	{
		return (-1);
	}
	filep = fopen(filename, "w");
	if (filep == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (fputs(text_content, filep) == EOF)
		{
			fclose(filep);
			return (-1);
		}
	}
	fclose(filep);
	return (1);
}
