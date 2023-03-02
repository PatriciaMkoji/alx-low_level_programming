#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - concanate strings
 * @dest: character to be used
 * @src: character to be used
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	char *final = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (final);
}
