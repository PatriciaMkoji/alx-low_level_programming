#include "main.h"
/**
 * print_rev - print in reverse
 * @s: character to be used
 * Result: return str
 */
void print_rev(char *s)
{
	int i, j;
	char k;
	int len = _puts(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
		_putchar('\n');
	}
}
