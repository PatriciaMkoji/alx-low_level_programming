#include "main.h"
/**
 * create_file - Create a function that creates a file
 * @filename: points to the file to be created
 * @text_content: pointer used
 * Return: if filename is NULL return -1: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *createfile;

	if (filename == NULL)
	{
		return (-1);
		exit(1);
	}

	createfile = fopen(filename, "w");
	if (createfile == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	else
	{
		fputs(text_content, createfile);
		fclose(createfile);
	}
	return (1);
}
