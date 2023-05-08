#include "main.h"
/**
 * append_text_to_file - appends text at the end of thhe file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *filep;

	if (filename == NULL)
	{
		return (-1);
	}
	filep = fopen(filename, "a");
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
