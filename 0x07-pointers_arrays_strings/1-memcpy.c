#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination of the copy
 * @src: source of the copy
 * @n: number of bytes from memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

