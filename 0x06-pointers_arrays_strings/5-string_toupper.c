#include "main.h"
/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @c: The string to be changed.
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}
	return (c);
}

