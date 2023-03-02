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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
		dest = '\0';
	return (final);
}
