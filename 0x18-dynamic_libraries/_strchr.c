#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a char in a string
 * @s: pointer usd
 * @c: character variable
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
