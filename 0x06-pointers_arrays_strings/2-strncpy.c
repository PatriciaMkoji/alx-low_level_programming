#include "main.h"
/**
 * _strncpy - copies string
 * @dest:destination string
 * @src: source string
 * @n: variable used
 * Return: result
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *final = dest;

	while (*src != '\0' && n--)
	{
		*dest++ = *src++;
	}
	dest = '\0';
	return (final);
}
