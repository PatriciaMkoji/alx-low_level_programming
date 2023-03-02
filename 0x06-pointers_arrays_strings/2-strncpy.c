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
	for (n = 0; n != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest = '\0';
	return (dest);
}
