#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strpbrk - searches for set of bytes
 * @s: string
 * @accept: bytes
 * Return: result
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}

