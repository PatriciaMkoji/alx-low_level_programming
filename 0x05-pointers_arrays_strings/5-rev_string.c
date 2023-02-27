#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: character used
 * Return: reversed *s
 */
void rev_string(char *s)
{
	char r;
	int i, j;
	int len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		r = s[i];
		s[i] = s[j];
		s[j] = r;
	}
}
