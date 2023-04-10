#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: If filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *appnd;

	if (filename == NULL)
	{
		printf("No file");
		return (-1);
		exit(1);
	}
	appnd = fopen(filename, "a");

	if (appnd == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fputs(text_content, appnd);
	}
	fclose(appnd);

	return (1);
}


