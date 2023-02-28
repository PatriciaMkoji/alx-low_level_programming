#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *str)
{
	int j = 0, i;

	while (str[i++])
		j++;

	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);

	_putchar('\n');
}
