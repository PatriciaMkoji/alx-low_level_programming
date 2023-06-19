#include "main.h"
/**
 * _strncat - concanates string
 * @dest: destination variable
 * @src: source variable
 * @n: number of bytes
 * Return: result in dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *final = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while ((*src != '\0') && n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (final);
}
