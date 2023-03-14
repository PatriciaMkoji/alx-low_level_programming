#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string used
 * Return: Null if insufficient memory
 */
char *_strdup(char *str)
{
	char *dup;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		len++;
	}
	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';

	return (dup);
}

