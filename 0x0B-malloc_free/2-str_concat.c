#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int len, i, j;

	len = 0;
	j = 0;
	i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	cat = malloc(len * sizeof(char));

	if (cat == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		cat[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		cat[j++] = s2[i];

	return (cat);
}
