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
	int i, j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
